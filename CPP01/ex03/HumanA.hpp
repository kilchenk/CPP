/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:51:55 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/18 13:05:36 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_A_HPP
#   define HUMAN_A_HPP
# include "Weapon.hpp"
# include "HumanA.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;
    public:
        HumanA(const std::string &name, Weapon &newWeapon);
        ~HumanA();
        void    attack(void);
};


#endif
