
#include "Person.h"
#include "Animal.h"


void Person::Display() const
{
	std::cout << GetName() << "\n";
	if (!m_pPet) return;
	std::cout << m_pPet->GetName() << " is owned by: " << GetName() << ".\n";
}