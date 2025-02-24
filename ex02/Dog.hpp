/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:43:07 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 02:49:15 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
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

        //Brain functions
        Brain *getBrain() const;
        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
};

#endif