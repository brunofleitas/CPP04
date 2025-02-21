/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:42:34 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 00:57:07 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : m_type("No Type")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : m_type(other.m_type)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->m_type = other.m_type;
    }
    std::cout << "Animal Assignment Operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->m_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}
