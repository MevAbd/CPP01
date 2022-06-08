/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:36:10 by malbrand          #+#    #+#             */
/*   Updated: 2022/06/08 15:52:36 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	/*                      string											   */
	std::string	str 		= "HI THIS IS BRAIN";
	std::cout << "address str = " << &str << std::endl;
	std::cout << "value str = " << str << std::endl;

	/*                      ptr	    										   */
	std::string	*stringPTR 	= &str;
	std::cout << "address ptr = " << stringPTR << std::endl;
	std::cout << "value ptr = " << *stringPTR << std::endl;

	/*                      ref	    										   */
	std::string &stringREF 	= str;
	std::cout << "address ref = " << &stringREF << std::endl;
	std::cout << "value ref = " << stringREF << std::endl;
	return (0);
}
