/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:13:43 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/08 15:12:06 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
#   define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
    private:
        std::string	_ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        Brain   &operator=(const Brain &copy);
        virtual ~Brain();
};


#endif