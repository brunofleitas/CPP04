/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:43:16 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 01:08:19 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        //Default Constructor
        Cat();
        //Copy Constructor
        Cat(const Cat& other);

        //Assignment Operator
        Cat& operator=(const Cat& other);
        
        //Destructor
        virtual ~Cat();

        //Member functions
        void makeSound() const;
};

#endif