#include "Reversim2.hh"

int Reversim2::Encripta() {

	uint8_t Input[] = "FLAG{https://nerdhits.com.br/wp-content/uploads/2022/04/anya-spy-x-family-3.jpg}";
	uint8_t Output[sizeof(Input) - 1];

	for (int i = 0; i < (sizeof(Input) - 1); i++) {

		Output[i] = (Input[(sizeof(Input) - 2) - i] ^ 2) - 1;

		cnVariables::variablesInstance->s_Output[0].append(1, Output[i]);

	}

	std::cout << "Input: " << cnVariables::variablesInstance->s_Output[0].c_str() << std::endl;

	return 0;
}

int Reversim2::Decripta() {

	uint8_t Input[] = "~dqg+0.zmjnbc.y.zqp.bzkb,51,//1/,peblmqv,ukfukl`.qt,o_+nl`+pujieofk,,7pquuixDBMC";
	uint8_t Output[sizeof(Input) - 1];
	std::string input_user[2];

	for (int i = 0; i < (sizeof(Input) - 1); i++) {

		Output[i] = (Input[(sizeof(Input) - 2) - i] + 1) ^ 2;

		cnVariables::variablesInstance->s_Output[1].append(1, Output[i]);

	}

	std::cout << "Enter the key: FLAG{";

	std::cin >> input_user[1];

	input_user[0] = "FLAG{";
	input_user[0].append(input_user[1]);

	if (input_user[0] == cnVariables::variablesInstance->s_Output[1]) {

		std::cout << "\nWow, very good, excellent!\n" << std::endl;

	}

	else {

		std::cout << "\nNop!\n" << std::endl;

	}

	std::cin.get();

	return 0;
}