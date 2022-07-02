#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

int	main(void)
{
	Weapon	club = Weapon("crude spiked club");

	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	
	
	Weapon	clubb = Weapon("crude spiked club");
	
	HumanB	jim("Jim");
	jim.setWeapon(clubb);
	jim.attack();
	clubb.setType("some other type of club");
	bob.attack();

	return (0);
}
