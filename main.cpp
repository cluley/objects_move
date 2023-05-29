#include <iostream>

#include "move_vectors.h"

using namespace std;

int main(int argc, char** argv) {
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;
	move_vectors(one, two);

	for (auto n : two) {
		cout << n << '\t';
	}

	return 0;
}