/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:01:09 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/07 15:54:42 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	if (_name == "")
		std::cout << "Zombie: Call the destructor" << std::endl;
	else
		std::cout << _name << ": Call the destructor" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	if (_name == "")
		std::cout << "Zombie: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
