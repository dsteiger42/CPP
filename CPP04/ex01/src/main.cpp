#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	delete			j;
	delete			i;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    

	return (0);
}
