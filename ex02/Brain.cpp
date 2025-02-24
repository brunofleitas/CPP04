/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:46:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 11:39:23 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "No Idea";
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100 ; i++)
            this->ideas[i] = src.ideas[i];
    }
    std::cout << "Copy Assignment Operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(std::string idea, int index)
{
    if (!(index < 0 || index >= 100))
        this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (!(index < 0 || index >= 100))
        return this->ideas[index];
    return "Index out size";
}