/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:43:07 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 01:02:15 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        //Default Constructor
        Dog();
        //Copy Constructor
        Dog(const Dog& other);

        //Assignment Operator
        Dog& operator=(const Dog& other);
        
        //Destructor
        virtual ~Dog();

        //Member functions
        void makeSound() const;
};

#endif