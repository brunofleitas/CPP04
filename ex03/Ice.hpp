/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:37:04 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 16:37:23 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        //Default constructor
        Ice();
        //Copy constructor
        Ice(Ice const & other);
        //Cpoy assignment operator=
        Ice & operator=(Ice const & other);
        //Destructor
        virtual ~Ice();

        //Member functions
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif