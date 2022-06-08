/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:46:10 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/08 12:43:07 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>
# include <string>

class Zombie
{
	private:
			std::string	_name;
	public:
			Zombie		();
			~Zombie		(void);
			void 		announce(void);
			void		givename(std::string name);
};

Zombie		*zombieHorde(int N, std::string name);

#endif
