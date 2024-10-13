
#include "Animal.h"

Animal::Animal(const std::string name, const int age)
{
	SetName(name);
	SetAge(age);
}

void Animal::Display() const
{
	std::cout << GetName() << " is " << GetAge() << " years old!\n";
	if (!m_pOwner) return;
	std::cout << GetName() << " is owned by " << m_pOwner->GetName() << ".\n";
}