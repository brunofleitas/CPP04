/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:34:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 01:19:22 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    {
        //Manual testing
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }

    //Create instances
    const Animal* zoo = new Animal();
    const Animal* Spike = new Dog();
    const Animal* Kira = new Cat();
    
    //Show types
    std::cout << "Animal type: " << zoo->getType() << std::endl;
    std::cout << "Dog type: " << Spike->getType() << std::endl;
    std::cout << "Cat type: " << Kira->getType() << std::endl;
    
    //Make sounds
    zoo->makeSound();
    Spike->makeSound();
    Kira->makeSound();
    
    //Free memory
    delete zoo;
    delete Spike;
    delete Kira;
    
    return 0;
}