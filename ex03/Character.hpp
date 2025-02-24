/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:34:06 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/23 18:35:54 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        //Default constructor
        Character();
        //Copy constructor
        Character(std::string const &name);
        Character(Character const &other);
        //Cpoy assignment operator=
        Character & operator=(Character const &other);
        //Destructor
        virtual ~Character();

        //Getters
        std::string const &getName() const;

        //Member functions
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif