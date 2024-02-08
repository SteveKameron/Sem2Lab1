#include <iostream>
#include <fstream>
#include <vector>

class FireWall {
private:
	std::string Name;
	int Security_Class;

public:
	FireWall(std::string ValueName, int ValueS);
	FireWall();
	void Print();
	void Set_Name(std::string Value_Name);
	void Set_SecurityClass(int ValueS);
	int Get_SecurityClass();
	std::string Get_Name();
};
