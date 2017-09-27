#include "matrix.h"
#include <fstream>
#include <string>

int main(int argc, char **argv){
	Matrix<std::string> m;
	std::ifstream in;
	in.open("../data/input/input.in");
	in >> m;
	in.close();
	std::cout<<m;

return EXIT_SUCCESS;
}
