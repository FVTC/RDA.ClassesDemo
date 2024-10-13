#pragma once

#include <iostream>

class Animal; // forward declaration

class Person
{

private:

	std::string m_name;

	Animal* m_pPet = nullptr;

public:

	Person() { m_name = "Bob"; }

	Person(const std::string name) { SetName(name); }

	~Person() { std::cout << "Goodbye cruel world!\n"; }

	std::string GetName() const { return m_name; }

	void SetName(const std::string name) { m_name = name; }

	void SetPet(Animal* pPet) { m_pPet = pPet; }

	void Display() const;

};