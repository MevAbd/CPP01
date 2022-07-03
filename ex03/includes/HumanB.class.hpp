/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:10:37 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:31 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
# include "Weapon.class.hpp"

class	HumanB
{
	private	:
				std::string	_name;
				Weapon		*_Weapon;
	public	:
				HumanB(std::string name);
				~HumanB(void);
				void	attack(void) const;
				void	setWeapon(Weapon &Weapon);
};

#endif

