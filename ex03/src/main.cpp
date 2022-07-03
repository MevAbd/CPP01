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

	std::cout << std::endl;	
	
	Weapon	clubb = Weapon("crude spiked club");
	
	HumanB	jim("Jim");
	jim.setWeapon(clubb);
	jim.attack();
	clubb.setType("some other type of club");
	jim.attack();

	std::cout << std::endl;	

	Weapon knife = Weapon("knife");

	HumanA	A("HumanA", knife);
	HumanB	B("HumanB");
	A.attack();
	B.attack();
	B.setWeapon(knife);
	B.attack();
	knife.setType("spear");
	A.attack();
	B.attack();
	return (0);
}
