/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:32:14 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 01:42:51 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCatPtr = new WrongCat();
    
    std::cout << wrongMeta->getType() << std::endl;
    std::cout << wrongCatPtr->getType() << std::endl;
    
    wrongMeta->makeSound(); // Will output WrongAnimal sound
    wrongCatPtr->makeSound(); // Will also output WrongAnimal sound
}