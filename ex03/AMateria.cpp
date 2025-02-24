/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:35:08 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 16:41:10 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : m_type("default")
{
}

AMateria::AMateria(std::string const & type) : m_type(type)
{
}

AMateria::AMateria(AMateria const & other)
{
    *this = other;
}

AMateria &AMateria::operator=(AMateria const & other)
{
    if (this != &other)
    {
        m_type = other.m_type;
    }
    return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return this->m_type;
}