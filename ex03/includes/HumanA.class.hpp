/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:20:40 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:45 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
# include <Weapon.class.hpp>

class	HumanA
{
	private	:
				std::string	_name;
				Weapon		_Weapon;
	public	:
				HumanA(std::string _name, Weapon _Weapon);
				~HumanA(void);
				void	attack(void) const;
};

#endif
