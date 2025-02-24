/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:35:22 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 16:40:39 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string m_type;
    public:
        //Default constructor
        AMateria();
        //Copy constructor
        AMateria(std::string const & type);
        AMateria(AMateria const & other);
        //Cpoy assignment operator=
        AMateria & operator=(AMateria const & other);
        //Destructor
        virtual ~AMateria();

        //Getters
        std::string const & getType() const;

        //Member functions
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif