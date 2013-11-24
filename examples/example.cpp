#include <iostream>
#include "octomat.hpp"

using namespace std;
using namespace octomat;

int main(){

Matrix a(3,3);
Matrix b(3,3);

Matrix final(3,3);

a.fill_matrix();
b.fill_matrix();

final = a + b;

final.print_matrix();

return 0;

}
