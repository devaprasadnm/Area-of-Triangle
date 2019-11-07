#include <iostream>
using namespace std;
int main(){
double x ;
cout << " \t ELECTRICTY BILL " << endl;
cout << " \t --------------- " << endl;
cout << " Consumption Unit = ";
cin >> x;
cout << " Amount = ";
if ( x <= 200 ){
cout  << x*0.5 << endl;
}
if ( x >= 201 && x <= 400 ){
cout << x*0.65+100 << endl;
}
if ( x >= 401 && x <= 600 ){
cout << x*.8+230 << endl;
}
if ( x > 600 ){
cout << x*1+390 << endl;
}
return 0;
}

