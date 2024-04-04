/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:04:17 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 15:28:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAV_TRAP_HPP
#   define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string const &name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap    &operator=(const ScavTrap &copy);
        void attack(const std::string& target);
        void guardGate();
};


#endif