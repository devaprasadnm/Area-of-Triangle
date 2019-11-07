#include <iostream>
using namespace std;
int main(){
double a ,b;
char add;
cout << " \t CALCULATOR " << endl ;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "Type the operator > ";
cin >> add;
switch ( add )
{
case '+':
cout << "a + b = " << a+b << endl;
break;
case '-':
cout << "a - b = " << a-b << endl;
break;
case '*':
cout << "a * b = " << a*b << endl;
break;
case '/':
cout << " a / b = " << a/b << endl;
break;
}
return 0;
}
