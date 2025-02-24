/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:33:52 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/24 01:47:22 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("no name")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const &other)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    *this = other;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
            {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
        }
        return *this;
    }
    else
        return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for(int i = 0; i < 4; i++)
        if(!this->inventory[i])
        {
            this->inventory[i] = m;
            break;
        }
}

void Character::unequip(int idx)
{
    if (!(idx < 0 || idx > 3 || !this->inventory[idx]))
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (!(idx < 0 || idx > 3 || !this->inventory[idx]))
        this->inventory[idx]->use(target);
}