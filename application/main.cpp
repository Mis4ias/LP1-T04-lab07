#include "comp.h"
#include <string>

int main(int argc, char **argv){
	std::string buffer;
	if(argc > 1){
		for(int it=0;it<argc;it++){
			buffer = argv[it];
			if(buffer.compare("--file") == 0){
				load_matrix(true);
			}		
			if(buffer.compare("--std") == 0){
				load_matrix(false);
			}	
		}
	
	
	}	
return EXIT_SUCCESS;
}
