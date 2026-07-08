#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : "<<endl;
    cin >> b;
 
    cout << "Sum = " << a+b <<endl;
    cout << "difference = " << a-b <<endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "division = " << a / b << endl;
    cout << "Remainder = "<< a % b <<  endl;


    return 0;
}