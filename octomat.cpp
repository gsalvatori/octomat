/*
* Octomat
*
* Copyright(c) 2013 Gabriele Salvatori
* http://www.salvatorigabriele.com
* salvatorigabriele@gmail.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/


#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>


using namespace std;


class Vector
{


    vector<int> main_v;

	public:

        /*
	     * Constructor
	     * @param dim : int; vector dimension
	     */
        Vector(int dim);
        
         /*
	     * Returns vector size
	     * @param None;
	     * @return int;
	     */
        size_t size();

         /*
	     * Max element inside a vector
	     * @param None;
	     * @return double;
	     */
         double max();

         /*
	     * Insert elem at the last position, inside the vector.
	     * @param dim : int; element
	     */
         void push_back(int elem);

         /*
	     * Check if a vector is empty.
	     * @param None;
	     * @return bool;
	     */
         bool isEmpty();

         /*
	     * Clear vector ( deletes all elements )
	     * @param None;
	     */
         void clear();

         /*
	     * Gets element values
	     * @param dim : int; vector dimension
	     */
         void fill_vector();

         /*
	     * Check if two vectors are equal
	     * @param other : const Vector; Vector
	     */
         bool isEqual(const Vector &other);

         /*
	     * Calculates the norm of a vector
	     * @param None;
	     */
         double norm();

         /*
	     * Prints vector
	     * @param None;
	     */
         void visualize();

         /*
	     * Operator overloading + : sum two vectors
	     * @param other : const Vector; Vector
	     */
         Vector operator+ (const Vector &other);

         /*
	     * Operator overloading - : diff two vectors
	     * @param other : const Vector; Vector
	     */
         Vector operator- (const Vector &other);

         /*
	     * Operator overloading * : multiplies two vectors
	     * @param other : const Vector; Vector
	     */
         double operator* (const Vector &other);

         /*
	     * Operator overloading * : multiplies a vector with a scalar(double)
	     * @param other : const Vector; Vector
	     */
         Vector operator* (const double &other);



};


Vector::Vector(int dim){


	for(int i=0; i<dim; i++){

        
		main_v.push_back(0);

	}

}

size_t Vector::size(){

	return main_v.size();

}

double Vector::max(){


	double max = main_v[0];

	for(int i=1; i<main_v.size(); i++){

		if ( max < main_v[i] ){

			max = main_v[i];

		}

	}

	return max;

}



void Vector::push_back( int elem ){

	main_v.push_back(elem);

}

bool Vector::isEmpty(){


	if ( main_v.size() == 0 ){

		return true;
	}

	return false;

}

void Vector::clear(){

	main_v.clear();
}

void Vector::fill_vector(){

    
    int element;
    int dimension = main_v.size();

    // erase zeros, so i can fill vector with other elements
	main_v.clear();


	cout << "Please enter some integers :\n";

    do {

    	cin >> element;
        main_v.push_back (element);

    } while ( main_v.size() != dimension );

}


bool Vector::isEqual(const Vector &other){


    int count = 0;

	for (int i=0; i<main_v.size(); i++){

		if (main_v[i] == other.main_v[i]){

			count++;
		}

	}

    if ( count == main_v.size() ){

    	return true;
    }


    return false;
	

}


double Vector::norm(){


	double squares, result;

	for(int i=0; i<main_v.size(); i++){

		squares += pow(main_v[i],2);

	}

	result = sqrt(squares);

	return abs(result);


}


void Vector::visualize(){


	if ( main_v.size() == 0 ){

		cout << "Vector is empty." << endl;
	}

	else{

        cout << "[";
		for (int i=0; i<main_v.size(); i++){

			cout << main_v[i] << ",";

		}
		cout << "]" << endl;
	}

}

Vector Vector::operator+ (const Vector &other){


	Vector result(*this);

	for (int i=0; i < main_v.size(); i++){

		result.main_v[i] += other.main_v[i];
	}

	return result;


}

Vector Vector::operator- (const Vector &other){


	Vector result(*this);

	for (int i=0; i < main_v.size(); i++){

		result.main_v[i] -= other.main_v[i];
	}

	return result;


}

double Vector::operator* (const Vector &other){

	double result = 0;

	for (int i=0; i<main_v.size(); i++){

		result += main_v[i] * other.main_v[i];

	}

	return result;


}

Vector Vector::operator* (const double &other){


	Vector result(*this);

	for (int i=0; i < main_v.size(); i++){

		result.main_v[i] *= other;
	}

	return result;


}


class Matrix
{


    vector<vector<int> > main_m;

	public:

        /*
	    * Constructor
	    * @param rows : int; rows of the matrix
	    * @param cols : int; columns of the matrix
	    */
		Matrix(int rows, int cols);

        /*
	    * Returns rows value
	    * @param None.
	    * @return double;
	    */
		double rows_num();

		/*
	    * Returns columns value
	    * @param None.
	    * @return double;
	    */
		double cols_num();

		/*
	    * Check if a matrix is null.
	    * @param None.
	    * @return bool;
	    */
		bool isNull();

		/*
	    * Fill matrix with integers
        * @param None.
	    */
		void fill_matrix();

		/*
	    * Print matrix
	    * @param None.
	    */
		void print_matrix();

		/*
	    * Returns a row by index
	    * @param index: int;
	    * @return Vector;
	    */
		Vector get_row(int index);

		/*
	    * Returns a column by index
	    * @param index: int;
	    * @return Vector;
	    */
		Vector get_col(int index);

	    /*
	    * Check if two matrices are equal
	    * @param other: const Matrix;
	    * @return bool;
	    */
		bool isEqual(const Matrix &other);

	    /*
	    * Check if a matrix is diagonal
	    * @param None.
	    * @return bool;
	    */
		bool isDiagonal();

		/*
	    * Calculates the transpose of a matrix
	    * @param index: int;
	    * @return Matrix;
	    */
		Matrix transpose();

		/*
	    * Calculates cofactor given position of element
	    * @param i: int;
	    * @param j: int;
	    * @return double;
	    */

		double cofactor(int x, int y);

		/*
	    * Calculates determinant of a matrix [ WORK UP TO 3X3 matrices ]
	    * @param None;
	    * @return double;
	    */
		double determinant();

		/*
	    * Calculates the rank of a matrix
	    * @param index: int;
	    * @return Matrix;
	    */
		double rank();

		/*
	    * Calculates the inverse of a matrix
	    * @param index: int;
	    * @return Matrix;
	    */
		Matrix inverse();

		/*
	    * Operator overloading + : sum two matrices
	    * @param other: const Matrix
	    * @return Matrix;
	    */
		Matrix operator+ (const Matrix &other);

	    /*
	    * Operator overloading - : sub two matrices
	    * @param other: const Matrix
	    * @return Matrix;
	    */
		Matrix operator- (const Matrix &other);

		/*
	    * Operator overloading * : product between a matrix and a scalar
	    * @param other: const double
	    * @return Matrix;
	    */
		Matrix operator* (const double &other);

		/*
	    * Operator overloading * : product between two matrices
	    * @param other: const double
	    * @return Matrix;
	    */
		Matrix operator* (const Matrix &other);



};



Matrix::Matrix(const int rows, const int cols){

	main_m.resize(rows);

    for (int i=0; i<rows; i++){

    	main_m[i].resize(cols);

    }

}


double Matrix::rows_num(){

	return main_m.size();

}


double Matrix::cols_num(){

    return main_m.size();

}


bool Matrix::isNull(){


	for (int i=0; i<rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			if ( main_m[i][j] != 0 ){

				return false;

			}
		}
	}

	return true;

}


void Matrix::fill_matrix(){

  
    int element;

	cout << "Please enter some integers :\n";

	for (int i=0; i<rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

            cin >> element;
			main_m[i][j] = element;

		}
	}

	cout <<endl;

}


void Matrix::print_matrix(){


	for (int i=0; i<rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			cout << setw(3) << main_m[i][j];

		}

            cout << endl;
	}

}


Vector Matrix::get_row(int index){


	Vector result(main_m.size());

	result.clear();

	for (int i=0; i < main_m.size(); i++){

		result.push_back(main_m[index][i]);

	}

	return result;


}


Vector Matrix::get_col(int index){


	Vector result(main_m.size());

	result.clear();

	for (int i=0; i < main_m.size(); i++){

		result.push_back(main_m[i][index]);

	}

	return result;


}


bool Matrix::isEqual(const Matrix &other){

	for (int i=0; i<rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			if ( main_m[i][j] != other.main_m[i][j] ){

				return false;
			}
		}
	}

	return true;

}


bool Matrix::isDiagonal(){ 

    
	if ( rows_num() != cols_num() ){

		cout << "Only square matrices can be diagonals.";
		return 0;
	}


	int check = 0;

	for (int i=0; i<rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			if ( i == j && main_m[i][j] == 0 ){

				check++;

			}

			if ( i != j && main_m[i][j] != 0 ){

				check++;

			}

		}
	}


	if ( check == 0 ){

		return true;

	}

	return false;

}


Matrix Matrix::transpose(){


	Matrix result(rows_num(),cols_num());


    for (int i=0; i<rows_num(); i++){
    	for (int j=0; j<cols_num(); j++){

    		result.main_m[j][i] = main_m[i][j];

    	}

    }


    return result;


}


double Matrix::cofactor(int x, int y){


	double cofactor = 0;
	double dim = rows_num();

	if ( x == 0 && y == 0 ){

		cofactor = main_m[1][1] * main_m[2][2] - main_m[1][2] * main_m[2][1];

	}

	if ( x == 0 && y == 1 ){

		cofactor = main_m[1][0] * main_m[2][2] - main_m[1][2] * main_m[2][0];
		
	}

	if ( x == 0 && y == 2 ){

		cofactor = main_m[1][0] * main_m[2][1] - main_m[1][1] * main_m[2][0];
		
	}


	return cofactor;

}


double Matrix::determinant(){


	double det = 0;

    
	if ( rows_num() == 2 ){

		det = ( main_m[0][0] * main_m[1][1] ) - ( main_m[0][1] * main_m[1][0] );
		return det;

	}
    

    // creating cofactor matrix from original elements
	Matrix cf_mat(*this);

	for (int i=0; i<rows_num(); i++){
		for( int j=0; j<cols_num(); j++){

			cf_mat.main_m[i][j] = main_m[i][j];

		}
	}

    // segno negativo a componenti alterne considerando la riga
	for (int z=1; z<rows_num()-1; z++){

		cf_mat.main_m[0][z] = main_m[0][z] * -1;

	}


	for(int j=0; j<=cols_num(); j++){

		det += cf_mat.main_m[0][j] * cofactor(0,j);

	}


	return det;

}


Matrix Matrix::operator+ (const Matrix &other){


	Matrix result(*this);

	for (int i=0; i <rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			result.main_m[i][j] = main_m[i][j] + other.main_m[i][j];

		}

	}
	

	return result;


}


Matrix Matrix::operator- (const Matrix &other){


	Matrix result(*this);

	for (int i=0; i <rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			result.main_m[i][j] = main_m[i][j] - other.main_m[i][j];

		}

	}
	

	return result;


}


Matrix Matrix::operator* (const double &other){


	Matrix result(*this);

	for (int i=0; i <rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			result.main_m[i][j] = main_m[i][j] * other;

		}

	}
	

	return result;


}


Matrix Matrix::operator* (const Matrix &other){


	Matrix result(*this);

	for (int i=0; i <rows_num(); i++){
		for (int j=0; j<cols_num(); j++){

			result.main_m[i][j] = 0;

			for (int z=0; z<rows_num(); z++){

				result.main_m[i][j] += main_m[i][z] * other.main_m[z][j];

			}
		}
	}



	return result;


}












