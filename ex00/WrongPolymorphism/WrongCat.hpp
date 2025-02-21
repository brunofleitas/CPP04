/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:33:02 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 01:39:08 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    public:
        //Default Constructor
        WrongCat();
        //Copy Constructor
        WrongCat(const WrongCat &src);
        //Assignment Operator
        WrongCat &operator=(const WrongCat &src);
        //Destructor
        ~WrongCat();
        //Member functions
        void makeSound() const;
};

#endif