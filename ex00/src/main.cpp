/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:12:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 00:35:00 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	GumGum("GumGum");
	Zombie	Graagh("Graagh");
	Zombie	Bruuh("");

	GumGum.announce();
	Graagh.announce();
	Bruuh.announce();

	std::cout << std::endl;
	randomChump("Rot");
	std::cout << std::endl;

	Zombie	*Dunce;

	Dunce = newZombie("Dunce");
	Dunce->announce();
	randomChump("Pinhead");
	std::cout << std::endl;
	delete Dunce;
	return (0);
}
