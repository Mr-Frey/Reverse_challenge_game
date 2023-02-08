#include <iostream>
#include <Windows.h>

class Reversim2 {

public:
	int Encripta();
	int Decripta();

};

class Variables {

public:
	std::string s_Output[2];

};

namespace cnVariables {

	static Variables* variablesInstance = new Variables();

}