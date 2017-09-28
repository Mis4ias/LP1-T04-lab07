#include "comp.h"
#include <string>
#include <fstream>

size_t num_col(std::string path){
	size_t num = 1;
	std::fstream in;
	std::string temp;
	in.open(path, std::fstream::in);
	std::getline(in, temp, '\n');
	for(std::string::iterator it = temp.begin(); it != temp.end(); it++){
		if(*it == ' ') num ++;
	}
	in.close();
return num;
}

/** Contabiliza o numero de linhas do arquivo. */
size_t num_lin(std::string path){
	size_t num = 0;
	std::fstream in;
	in.open(path, std::fstream::in);
	std::string temp;
	while(std::getline(in, temp, '\n')){
		num++;
	}
	in.close();
return num;	
}
