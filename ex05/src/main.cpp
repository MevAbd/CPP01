/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:14:04 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/06 22:14:06 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main(void)
{
	Harl	Vali;

	Vali.complain("error");
	Vali.complain("debug");
	Vali.complain("info");
	Vali.complain("warning");
	return (0);
}
