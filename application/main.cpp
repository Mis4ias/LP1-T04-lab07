#include "comp.h"
#include "matrix.h"
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv){
	
	size_t numl, numc;	
	numl = num_lin("../data/input/input.in");
	numc = num_col("../data/input/input.in");

	Matrix<std::string> m(numl, numc);
	
	std::ifstream in;
	in.open("../data/input/input.in");
	in >> m;
	in.close();
	std::cout<<m;

return EXIT_SUCCESS;
}
