/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:32 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 17:00:25 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONG_CAT_HPP
#   define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
        
    public:
        WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        ~WrongCat();
        void    makeSound()const;
};


#endif