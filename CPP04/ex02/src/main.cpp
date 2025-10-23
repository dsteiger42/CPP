#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main(void)
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    int const n = 10;
    Animal *animals[n];

    for (int i = 0; i < n / 2; i++)
        animals[i] = new Dog();
    for (int i = n / 2; i < n; i++)
        animals[i] = new Cat();
    for (int i = 0; i < n; i++)
        delete animals[i];
    return (0);
}
