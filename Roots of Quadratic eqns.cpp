#include <iostream>
#include <math.h>
using namespace std;
int main(){
cout << "\t ROOTS OF QUADRATIC EQUATION" << endl;
cout << "\t ------------------------------" << endl;
double a, b, c ,g ,h;
cout << " a = " ;
cin >> a;
cout << " b = ";
cin >> b;
cout << " c = " ;
cin >> c;
g = (-b+sqrt((b*b)-4*a*c))/2*a ;
h = (-b-sqrt((b*b)-4*a*c))/2*a ;
cout << "ROOTS ARE  \n x1 = " << g << "  \n x2 = " << h << endl;
return 0;
}
