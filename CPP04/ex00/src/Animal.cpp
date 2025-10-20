/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:50:20 by dsteiger          #+#    #+#             */
/*   Updated: 2025/10/20 18:04:30 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->_type = copy._type;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()
{
    std::cout << _type << std::endl;
}

std::string Animal::getType()
{
    return this->_type;
}