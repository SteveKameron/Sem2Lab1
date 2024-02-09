#include "Header1.h"
#include <iostream>

FireWall::FireWall(std::string ValueName, int ValueS) {
	Name = ValueName;
	Security_Class = ValueS;
}

FireWall::FireWall() {

}

void FireWall::Print() {
	std::cout << "Name: " << Name << std::endl;
	std::cout << "  Security Class: " << Security_Class << std::endl << std::endl;
}

void FireWall::Set_Name(std::string ValueName) {
	Name = ValueName;
}

void FireWall::Set_SecurityClass(int ValueS) {
	Security_Class = ValueS;
}

std::string FireWall::Get_Name() {
	return Name;
}


int FireWall::Get_SecurityClass() {
	return Security_Class;
}