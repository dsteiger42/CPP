#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

class FragTrap : public ClapTrap
{
  private:
  public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &copy);
	~FragTrap();
	void highFivesGuys(void);
};

#endif