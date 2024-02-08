#include "Header1.h"
#include <fstream>
#include <vector>
int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "Enter Security Class: " << std::endl;
	int Class_Sec;
	std::cin >> Class_Sec;
	std::vector<FireWall> MyVector;
	std::ifstream file("input.txt");
	FireWall Temp;
	if (!file.is_open()) {
		std::cout << " Failed to open file for reading" << std::endl;
	}
	else {
		std::string Temp_String;
		int Temp_SClass;
		while (!file.eof()) {
			file >> Temp_String;
			file >> Temp_SClass;
			Temp.Set_Name(Temp_String);
			Temp.Set_SecurityClass(Temp_SClass);
			MyVector.push_back(Temp);
		}
	}
	std::ofstream Output;
	Output.open("output.txt");
	if (!Output.is_open()) {
		std::cout << "Failed to open file for writing" << std::endl;
	}
	else {
		for (int i = 0; i < size(MyVector); i++) {
			if (MyVector[i].Get_SecurityClass() <= Class_Sec) {
				MyVector[i].Print();
				Output << "Name: " << MyVector[i].Get_Name();
				Output << "; Security Class: " << MyVector[i].Get_SecurityClass() << std::endl;
			}
		}
	}
	return 0;
}