/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:46:10 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/07 16:05:30 by malbrand         ###   ########.fr       */
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
			Zombie		(std::string name);
			~Zombie		(void);
			void 		announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
