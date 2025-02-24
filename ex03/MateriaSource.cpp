/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:35:29 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/24 01:57:32 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
            {
                delete this->materia[i];
                this->materia[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.materia[i])
                this->materia[i] = other.materia[i]->clone();
        }
        return *this;
    }
    else
        return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
        {
            delete this->materia[i];
            this->materia[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!this->materia[i])
        {
            this->materia[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] && this->materia[i]->getType() == type)
            return this->materia[i]->clone();
    }
    return NULL;
}