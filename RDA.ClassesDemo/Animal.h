#pragma once

#include <iostream>

#include "Person.h"

class Animal
{

private:

	// fields
	std::string m_name;
	int m_age = 0;

	Person* m_pOwner = nullptr;

public:

	// constructors
	Animal() { m_name = "Fido"; }

	Animal(const std::string name, const int age);

	// destructor
	~Animal() { std::cout << GetName() << " is being deleted.\n"; }

	// mutator methods (setters)
	void SetName(const std::string name) { m_name = name; }
	void SetAge(const int age) { if (age >= 0) m_age = age; }
	void SetOwner(Person* pOwner) { m_pOwner = pOwner; }

	// accessor methods (getters)
	std::string GetName() const { return m_name; }
	int GetAge() const { return m_age; }
	Person* GetOwner() const { return m_pOwner; }

	// methods
	void Display() const;

};