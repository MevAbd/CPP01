/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:20:40 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:45 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string _name, Weapon &_Weapon) : _name(_name), _Weapon(_Weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl; 
}
