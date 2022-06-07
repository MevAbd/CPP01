/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:12:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/07 16:08:11 by malbrand         ###   ########.fr       */
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

	randomChump("Rot");

	Zombie	*Dunce;

	Dunce = newZombie("Dunce");
	Dunce->announce();
	randomChump("Pinhead");
	delete Dunce;
	return (0);
}
