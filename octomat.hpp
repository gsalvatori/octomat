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


#ifndef _OCTOMAT_H
#define _OCTOMAT_H

#include <iostream>
#include <vector>

using std::vector;


namespace octomat {


class Vector
{


    vector <int> main_v;

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
        int size();

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

}

#endif
