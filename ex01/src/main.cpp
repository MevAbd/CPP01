ear * ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:12:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/06 21:49:28 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	*horde_1;
	Zombie	*horde_2;
	Zombie	*horde_3;

	horde_1 = zombieHorde(3, "one");
	horde_2 = zombieHorde(6, "two");
	horde_3 = zombieHorde(9, "three");

	for (int i = 0; i < 3; i++)
		horde_1[i].announce();
	std::cout << std::endl;
	delete []horde_1;	
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		horde_2[i].announce();
	std::cout << std::endl;
	delete []horde_2;	
	std::cout << std::endl;
	for (int i = 0; i < 9; i++)
		horde_3[i].announce();
	std::cout << std::endl;
	delete []horde_3;	

	return (0);
}
