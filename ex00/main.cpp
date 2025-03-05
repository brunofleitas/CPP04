/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:34:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/03/05 01:48:05 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    {
        std::cout << "\nManual testing" << std::endl;

        //Create instances
        std::cout << "\nCreating instances\n" << std::endl;
        const Animal* zoo = new Animal();
        const Animal* Spike = new Dog();
        const Animal* Kira = new Cat();
        
        //Show types
        std::cout << "\nShowing types\n" << std::endl;
        std::cout << "Animal type: " << zoo->getType() << std::endl;
        std::cout << "Dog type: " << Spike->getType() << std::endl;
        std::cout << "Cat type: " << Kira->getType() << std::endl;
        
        //Make sounds
        std::cout << "\nMaking sounds\n" << std::endl;
        zoo->makeSound();
        Spike->makeSound();
        Kira->makeSound();
        
        //Free memory
        std::cout << "\nFreeing memory\n" << std::endl;
        delete zoo;
        delete Spike;
        delete Kira;
    }
    
    return 0;
}