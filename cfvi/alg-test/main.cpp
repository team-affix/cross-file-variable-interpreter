#include "interpret.h"
#include <iostream>

using namespace cfvi::interpretation;

int main() {

	vector<symbol> symbols;

	interpret("test.txt", symbols);

	std::cout << "\n\n\n\n\n\n\n";

	return 0;
}