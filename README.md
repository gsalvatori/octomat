Octomat
---


A C++ library to solve linear algebra problems.

Features:
---
Vector:

* size                          : Return vector size
* max                           : Max element inside a vector
* push_back                     : Insert element at the last position
* is_Empty                      : Check if a vector is empty
* clear                         : Clear vector (deletes all elements)
* fill_vector                   : Fill vector with values
* isEqual                       : Check if two vectors are equal
* norm                          : Calculate the norm of a vector
* visualize                     : Print vector
* operator +                    : Operator overloading - sum two vectors
* operator -                    : Operator overloading - sub two vectors
* operator * (double)           : Operator overloading - Mult a vector with a scalar
* operator * (Vector)           : Operator overloading - Mult two vectors

Matrix:


Compile:
---

Include octomat.cpp into your source file and compile it with:

* g++ -o test source.cpp

* ./test

License:
---

GNU General Public License v3.0 - http://www.gnu.org/licenses/gpl.html
