#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
	Brain *_brain;

  public:
	Dog(void);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);
	~Dog(void);
	void makeSound(void) const;
    Brain *getBrain() const;
};

#endif