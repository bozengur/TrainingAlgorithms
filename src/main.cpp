#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"


int main(int argc, char* argv[])
{
	int n_val = argc;
	int value = std::stoi(argv[1]);

	algorithms::Solution solver;
	std::cout<<solver.findReverse(value); 

	return 0;
}
