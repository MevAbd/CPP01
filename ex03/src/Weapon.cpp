/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:20:40 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:45 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(std::string _type) : _type(_type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
