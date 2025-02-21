/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:43:16 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 13:15:33 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
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

        //Brain functions
        Brain *getBrain() const;
        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
};

#endif