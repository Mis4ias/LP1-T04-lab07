#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

template <typename T>
class Matrix {
	private:
		std::vector<std::vector<T>> _data;		
	public:
		Matrix(){
			_data.resize(10);
			for(size_t it = 0; it < 10; it++){
				_data[it].resize(10);
			}
		}			
		
		
		
		
		
		friend std::ostream& operator <<(std::ostream& out, const Matrix<T>& right_obj){
			for(size_t it = 0; it < 10; it++){
				for(size_t ik=0; ik < 10; ik++){
					out<<right_obj._data[it][ik]<<" ";
				}
			out<<std::endl;
			}	
			
		return out;	
		}	
		
		friend std::ifstream& operator >>(std::ifstream& in, Matrix<T>& right_obj){
			std::string temp;	
			for(size_t it = 0; it < 10; it++){	
				for(size_t ik = 0; ik < 10; ik++){
					in >> temp; //this works !!!!!
					right_obj._data[it][ik] = temp;
				}	
			}
			return in;	
		}



};



#endif //__MATRIX_H__
