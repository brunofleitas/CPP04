/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:54:37 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/24 02:02:47 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main() {
    /*
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");
        
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }*/
    /**/
    {
        // Crear source de materias
        IMateriaSource* src = new MateriaSource();
        
        // Aprender materias
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        // Crear personaje
        ICharacter* me = new Character("me");
        
        // Crear materias y equiparlas
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
        // Crear otro personaje
        ICharacter* bob = new Character("bob");
        
        // Usar las materias
        me->use(0, *bob);
        me->use(1, *bob);
        
        // Pruebas adicionales
        std::cout << "\n--- Pruebas adicionales ---\n" << std::endl;
        
        // Probar copy constructor
        Character* original = new Character("original");
        tmp = src->createMateria("ice");
        original->equip(tmp);
        
        Character* copy = new Character(*original);
        std::cout << "Original usa materia: ";
        original->use(0, *bob);
        std::cout << "Copia usa materia: ";
        copy->use(0, *bob);
        
        // Probar unequip
        std::cout << "\nProbando unequip:" << std::endl;
        original->unequip(0);
        std::cout << "Después de unequip, original intenta usar materia: ";
        original->use(0, *bob);
        
        // Probar límite de inventario
        std::cout << "\nProbando límite de inventario:" << std::endl;
        Character* full = new Character("full");
        for (int i = 0; i < 5; i++) {
            tmp = src->createMateria(i % 2 == 0 ? "ice" : "cure");
            full->equip(tmp);
            std::cout << "Equipando materia " << i << std::endl;
        }

        // Uso de todas las materias
        std::cout << "\nUsando todas las materias:" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << "Usando materia " << i << ": ";
            full->use(i, *bob);
        }

        // Limpiar memoria
        delete bob;
        delete me;
        delete src;
        delete original;
        delete copy;
        delete full;
    }
    /**/
    return 0;
}