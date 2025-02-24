/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:37:29 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 16:50:03 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        //Default constructor
        Cure();
        //Copy constructor
        Cure(Cure const & other);
        //Cpoy assignment operator=
        Cure & operator=(Cure const & other);
        //Destructor
        virtual ~Cure();

        //Member functions
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif