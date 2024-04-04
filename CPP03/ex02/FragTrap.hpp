/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:53:54 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 16:33:09 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAG_TRAP_HPP
#   define FRAG_TRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string const &name);
        FragTrap(const FragTrap &copy);
        FragTrap    &operator=(const FragTrap &copy);
        void attack(const std::string& target);
        void highFivesGuys(void);
};


#endif