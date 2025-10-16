/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:15:51 by dsteiger          #+#    #+#             */
/*   Updated: 2025/10/16 18:16:58 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << "ScavTrap copy constructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
    std::cout << "ScavTrap assignment operator has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor has been called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
}