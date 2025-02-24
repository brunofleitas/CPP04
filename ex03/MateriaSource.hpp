/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:36:23 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/24 01:42:52 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        //Default constructor
        MateriaSource();
        //Copy constructor
        MateriaSource(MateriaSource const & other);
        //Cpoy assignment operator=
        MateriaSource & operator=(MateriaSource const & other);
        //Destructor
        virtual ~MateriaSource();

        //Member functions
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif