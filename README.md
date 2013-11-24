Octomat
---


A C++ library to solve linear algebra problems.

Features:
---
Vector:

* size                          : Returns vector size
* max                           : Max element inside a vector
* push_back                     : Inserts element at the last position
* is_Empty                      : Checks if a vector is empty
* clear                         : Clears vector (deletes all elements)
* fill_vector                   : Fills vector with values
* isEqual                       : Checks if two vectors are equal
* norm                          : Calculates the norm of a vector
* visualize                     : Prints vector
* operator +                    : Operator overloading - sum two vectors
* operator -                    : Operator overloading - sub two vectors
* operator * (double)           : Operator overloading - Mult a vector with a scalar
* operator * (Vector)           : Operator overloading - Mult two vectors

Matrix:

* rows_num                      : Returns the number of rows
* cols_num                      : Returns the number of colums
* isNull                        : Checks if a matrix is null
* fill_matrix                   : Fills matrix with values
* print_matrix                  : Prints matrix
* get_row                       : Returns a row
* get_col                       : Returns a col
* isEqual                       : Check if two matrices are equals
* isDiagonal                    : Check if a matrix is diagonal
* transpose                     : Returns the transpose of a matrix
* cofactor                      : Calculates cofactors
* determinant                   : Calculates determinant
* rank                          : Calculates rank
* inverse                       : Returns inverse of a matrix
* operator +                    : Operator overloading - sum two matrices
* operator -                    : Operator overloading - sub two matrices
* operator *                    : Operator overloading - mult a matrix with a vector
* operator *                    :Operator overloading - mult two matrices


Compile:
---

* g++ -o test octomat.cpp example.cpp

* ./test

License:
---

GNU General Public License v3.0 - http://www.gnu.org/licenses/gpl.html
