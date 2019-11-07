#include <iostream>
using namespace std;
int main(){
cout << "\t PROGRESS CARD" << endl;
cout << "\t --------------" << endl;

cout << "Upload your marks below" << endl;
double a, b, c, d, e, f, g;
cout << "MATHS = ";
cin >> a;
cout << "BME = ";
cin >> b;
cout << "BCE = ";
cin >> c;
cout << "MECHANICS = ";
cin >> d;
cout << "PHYSICS = ";
cin >> e;
f = a + b + c + d + e ;
cout << "SUM OF MARKS = " << f << endl;
g = ( f / 250 )*100 ;
cout << "Perscentage = " << g << "%" << endl; 
cout << "REMARKS" << endl ;
if ( g >= 75)
{
	cout << "FIRST CLASS WITH DISTINCTION" << endl ;
}
if ( g >= 60 && g < 75 )
{
	cout << "FIRST CLASS" << endl ;
}
if ( g >= 50 && g < 60 )
{
	cout << "SECOND CLASS" << endl  ;
}
if ( g < 50 )
{
	cout << " FAILED " << endl ;
}
return 0;
}

 
