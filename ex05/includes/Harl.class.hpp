#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP
# include <iostream>

class	Harl
{
	private :
		void	debug(void);
		void	error(void);
		void	info(void);
		void	warning(void);
	public :
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

typedef void	(Harl::*tab)(void);

#endif
