/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:07:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/15 15:13:41 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP
# include <iostream>
# include <string>

class	Weapon
{
	private :
				std::string	_type;
	public	:
				Weapon(void);
				~Weapon(void);
				const std::string _type getType(void);
				void 					setType(std::string _type);
};

#endif
