/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:42:27 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 02:49:38 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string m_type;
    public:
        //Default Constructor
        Animal();
        //Copy Constructor
        Animal(const Animal& other);

        //Assignment Operator
        Animal& operator=(const Animal& other);
        
        //Destructor
        virtual ~Animal();

        //Member functions
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif