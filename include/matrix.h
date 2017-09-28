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
		Matrix(size_t _nlin, size_t _ncol){
			_data.resize(_nlin);
			for(size_t it = 0; it < _nlin; it++){
				_data[it].resize(_ncol);
			}
		}			
		
		
		
	
		
		friend std::ostream& operator <<(std::ostream& out, const Matrix<T>& right_obj){
			for(size_t it = 0; it < right_obj._data.size(); it++){	
				for(size_t ik = 0; ik < right_obj._data[it].size(); ik++){
					out<<right_obj._data[it][ik]<<" ";
				}
			out<<std::endl;
			}	
			
		return out;	
		}	
		friend std::istream& operator >>(std::istream& in, Matrix<T>& right_obj){
			//std::string temp;	
			for(size_t it = 0; it < right_obj._data.size(); it++){	
				for(size_t ik = 0; ik < right_obj._data[it].size(); ik++){
			//		in >> temp; //this works !!!!!
					in >> right_obj._data[it][ik]; 
				}	
			}
			return in;	
		}
		
		friend std::ofstream& operator <<(std::ofstream& out, const Matrix<T>& right_obj){
			for(size_t it = 0; it < right_obj._data.size(); it++){	
				for(size_t ik = 0; ik < right_obj._data[it].size(); ik++){
					out<<right_obj._data[it][ik]<<" ";
				}
			out<<std::endl;
			}	
			
		return out;	
		}
		friend std::ifstream& operator >>(std::ifstream& in, Matrix<T>& right_obj){
			std::string temp;	
			for(size_t it = 0; it < right_obj._data.size(); it++){	
				for(size_t ik = 0; ik < right_obj._data[it].size(); ik++){
					in >> temp; //this works !!!!!
					right_obj._data[it][ik] = temp;
				}	
			}
			return in;	
		}



};



#endif //__MATRIX_H__
