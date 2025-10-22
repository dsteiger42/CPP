#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
  private:
    std::string _ideas[100];
    
  public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	virtual ~Brain();
    void setIdea(int index, std::string idea);
    std::string getIdea(int index) const;
};

#endif