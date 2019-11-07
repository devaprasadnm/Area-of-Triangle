#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a, b, c, s;
double d;
cout << "AREA OF TRIANGLE" << endl;
cout << " a, b, c are the 3 sides of triangle "<< endl;
cout << " a = " << flush;
cin >> a;
cout << " b = " <<flush;
cin >> b;
cout << " c = " <<flush;
cin >> c;
s=(a+b+c)/2;
d=sqrtf(s*(s-a)*(s-b)*(s-c));
cout << " Area = " << flush;
cout << d;
return 0;
}
