#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

template <typename T>
class Matrix {
	private:
		std::vector<T> _data;		
	public:
		Matrix(){
			_data.resize(10);
		}			
		
		
		
		
		
		friend std::ostream& operator <<(std::ostream& out, const Matrix<T>& right_obj){
			for(size_t k=0;k<10;k++){
				out<<right_obj._data[k]<<" ";
			}
			out<<std::endl;
		return out;	
		}	
		
		friend std::ifstream& operator >>(std::ifstream& in, Matrix<T>& right_obj){
			std::string temp;	
			for(size_t k = 0; k<10;k++){
				in >> temp; //this works !!!!!
				right_obj._data[k] = temp;
			}	

			return in;	
		}



};



#endif //__MATRIX_H__
