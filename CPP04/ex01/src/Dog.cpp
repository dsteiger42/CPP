#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << _type << "-> ruf ruf" << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->_brain;
}
