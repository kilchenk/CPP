/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:52:01 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/15 13:39:21 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_B_HPP
#   define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(const std::string &name);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon  &newWeapon);
};

#endif
