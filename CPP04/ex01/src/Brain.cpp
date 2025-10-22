#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100 || _ideas[index].empty())
		return ("");
	return (_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Error: index outside bounderies." << std::endl;
		return ;
	}
	_ideas[index] = idea;
}
