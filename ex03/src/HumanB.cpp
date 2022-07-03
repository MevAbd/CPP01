/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:20:40 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:45 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string _name) : _name(_name), _Weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::attack(void) const
{
	if (this->_Weapon == NULL)
		std::cout << this->_name << " can't attack because he haven't got a weapon. TRY AGAIN." << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}
