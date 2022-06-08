/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:26:04 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/08 12:42:46 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*team = new Zombie[N];

	for (int i = 0; i < N; i++)
		team[i].givename(name);
	return (team);
}
