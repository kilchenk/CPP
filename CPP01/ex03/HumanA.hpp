/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:51:55 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/14 15:49:18 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_A_HPP
#   define HUMAN_A_HPP
# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon      &_weapon;
public:
    HumanA();
    HumanA(const std::string &name, const Weapon &newWeapon);
    ~HumanA();
    void    attack(void);
};


#endif
