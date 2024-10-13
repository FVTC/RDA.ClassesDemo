
// Classes Demo
// Ryan Appel

#include <conio.h>

#include "Animal.h"
#include "Person.h"

int main()
{
	Animal jimmy;
	//jimmy.SetName("Jimmy");
	jimmy.SetAge(7);
	jimmy.Display();

	Animal daisy("Daisy", 6);
	daisy.Display();

	Person bob;
	bob.SetName("Bob");


	Animal *pAnimal = new Animal;
	pAnimal->SetName("Noodle");
	pAnimal->SetAge(1);
	pAnimal->SetOwner(&bob);
	pAnimal->Display();

	bob.SetPet(pAnimal);
	bob.Display();

	delete pAnimal;

	(void)_getch();
	return 0;
}
