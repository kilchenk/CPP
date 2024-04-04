/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:52:37 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 17:23:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMOND_TRAP_HPP
#   define DIAMOND_TRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string const &name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap    &operator=(const DiamondTrap &copy);
        void attack(const std::string& target);
        void whoAmI();
};

#endif