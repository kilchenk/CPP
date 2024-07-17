/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:26 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 16:59:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONG_ANIMAL_HPP
#   define WRONG_ANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        virtual void    makeSound() const; 
        const std::string   &getType() const;
};




#endif