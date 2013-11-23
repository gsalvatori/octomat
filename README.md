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

* rows_num                      :
* cols_num                      :
* isNull                        :
* fill_matrix                   :
* print_matrix                  :
* get_row                       :
* get_col                       :
* isEqual                       :
* isDiagonal                    :
* transpose                     :
* cofactor                      :
* determinant                   :
* rank                          :
* inverse                       :
* operator +                    :
* operator -                    :
* operator *                    :
* operator *                    :


Compile:
---

Include octomat.cpp into your source file and compile it with:

* g++ -o test source.cpp

* ./test

License:
---

GNU General Public License v3.0 - http://www.gnu.org/licenses/gpl.html
