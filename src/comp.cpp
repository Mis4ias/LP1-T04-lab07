#include "comp.h"
#include "matrix.h"
#include <string>
#include <fstream>
#include <iostream>

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

void load_matrix(bool opts){
	size_t numl, numc;	
	std::string in_path = "../data/input/input.in";
	std::string out_path = "../data/output/out.out";
	std::ifstream inputs;
	std::ofstream outputs;
	if(opts == true){
		numl = num_lin(in_path);
		numc = num_col(in_path);
		Matrix<std::string> mat(numl, numc);
		inputs.open(in_path);
		inputs >> mat;
		inputs.close();		
		outputs.open(out_path);
		outputs<<mat;
		outputs.close();
	
	}
	if(opts == false){
		std::cout<<"Num de linhas: ";
		std::cin>>numl;
		std::cout<<"Num de colunas: ";
		std::cin>>numc;
		Matrix<int>mat(numl, numc);	
		std::cin>>mat;
		std::cout<<mat;	
	}

	





}
