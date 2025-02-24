/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:47:01 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 13:15:28 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        //Default Constructor
        Brain();
        //Copy Constructor
        Brain(const Brain &src);
        //Copy Assignment Operator
        Brain &operator=(const Brain &src);
        //Destructor
        ~Brain();
        //Setters
        void setIdea(std::string idea, int index);
        //Getters
        std::string getIdea(int index) const;
};

#endif