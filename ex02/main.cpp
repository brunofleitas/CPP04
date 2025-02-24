/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:34:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 02:49:08 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    /*
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
    */

    //Basic test
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    
    i->makeSound();
    j->makeSound(); 
    
    delete j;
    delete i;
    
    //Array of animals
    int animalCount = 10;
    Animal* animals[animalCount];
    
    for (int k = 0; k < animalCount; k++)
    {
        if (k < animalCount / 2) {
            animals[k] = new Dog();
        } else {
            animals[k] = new Cat();
        }
    }
    
    for (int k = 0; k < animalCount; k++)
    {
        std::cout << "Animal " << k << " says: ";
        animals[k]->makeSound();
    }
    
    for (int k = 0; k < animalCount; k++)
    {
        delete animals[k];
    }

    //Deep copy test Dog
    Dog* originalDog = new Dog();
    originalDog->setIdea("I want to chase the mailman!", 0);
    
    Dog* copyDog = new Dog(*originalDog);
    
    std::cout << "Original dog idea: " << originalDog->getIdea(0) << std::endl;
    std::cout << "Copy dog idea: " << copyDog->getIdea(0) << std::endl;
    
    originalDog->setIdea("I want to chase squirrels!", 0);
    
    std::cout << "After modification:" << std::endl;
    std::cout << "Original dog idea: " << originalDog->getIdea(0) << std::endl;
    std::cout << "Copy dog idea: " << copyDog->getIdea(0) << std::endl;
    
    delete originalDog;
    delete copyDog;
    
    //Deep copy test Cat
    Cat originalCat;
    originalCat.setIdea("I want to sleep all day!", 0);
    
    Cat copyCat = originalCat;
    
    std::cout << "Original cat idea: " << originalCat.getIdea(0) << std::endl;
    std::cout << "Copy cat idea: " << copyCat.getIdea(0) << std::endl;
    
    // Cambiar una idea en el gato original
    originalCat.setIdea("I want to knock things off the table!", 0);
    
    std::cout << "After modification:" << std::endl;
    std::cout << "Original cat idea: " << originalCat.getIdea(0) << std::endl;
    std::cout << "Copy cat idea: " << copyCat.getIdea(0) << std::endl;

    return 0;
}