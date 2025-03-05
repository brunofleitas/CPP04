/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:34:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/03/05 12:52:30 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    /*
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
    */

    {
        //Basic test
        std::cout << std::endl << "Basic test" << std::endl;
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        delete j;
        delete i;
    }

    {
        //Array of animals
        std::cout << std::endl << "Array of animals" << std::endl;
        int animalCount = 10;
        Animal* animals[animalCount];
        std::cout << std::endl << "Creating " << animalCount << " animals" << std::endl;
        for (int k = 0; k < animalCount; k++)
        {
            if (k < animalCount / 2) {
                animals[k] = new Dog();
            } else {
                animals[k] = new Cat();
            }
        }
        std::cout << std::endl <<"Making sounds" << std::endl;
        for (int k = 0; k < animalCount; k++)
        {
            std::cout << "Animal " << k << " says: ";
            animals[k]->makeSound();
        }
        std::cout << std::endl << "Freeing memory" << std::endl;
        for (int k = 0; k < animalCount; k++)
        {
            delete animals[k];
        }
    }
    
    {
        //Deep copy test Dog
        std::cout << std::endl << "Deep copy test Dog" << std::endl;
        Dog* originalDog = new Dog();
        originalDog->setIdea("I want to chase the mailman!", 0);
        Dog* copyDog = new Dog(*originalDog);
        std::cout << "Original dog idea: " << originalDog->getIdea(0) << std::endl;
        std::cout << "Copy dog idea: " << copyDog->getIdea(0) << std::endl;
        originalDog->setIdea("I want to chase squirrels!", 0);
        std::cout << "After modification:" << std::endl;
        std::cout << "Original dog idea: " << originalDog->getIdea(0) << std::endl;
        std::cout << "Copy dog idea: " << copyDog->getIdea(0) << std::endl;
        std::cout << std::endl << "Freeing memory" << std::endl;
        delete originalDog;
        delete copyDog;
    }
    
    {
        //Deep copy test Cat
        std::cout << std::endl << "Deep copy test Cat" << std::endl;
        Cat originalCat;
        originalCat.setIdea("I want to sleep all day!", 0);

        std::cout << std::endl << "Using the assignment operator" << std::endl;
        Cat copyCat = originalCat;
        std::cout << "Original cat idea: " << originalCat.getIdea(0) << std::endl;
        std::cout << "Copy cat idea: " << copyCat.getIdea(0) << std::endl;

        std::cout << std::endl << "Change cat idea:" << std::endl;
        originalCat.setIdea("I want to knock things off the table!", 0);
        std::cout << "After modification:" << std::endl;
        std::cout << "Original cat idea: " << originalCat.getIdea(0) << std::endl;
        std::cout << "Copy cat idea: " << copyCat.getIdea(0) << std::endl;
    }    
    
    return 0;
}