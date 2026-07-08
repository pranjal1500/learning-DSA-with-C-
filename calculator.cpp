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

    // int a, b;
    // char op;
    // cout << "Enter a : ";
    // cin >> a;
    // cout << "Enter b : ";
    // cin >> b;
    // cout << "Enter operator to perform operations(+, -, * , /, %) : " ;
    // cin >> op;
    // switch(op){
    //     case '+' : cout << "sum = " << a + b << endl;
    //     break;
    //     case '-' : cout << "diffference = " << a - b << endl;
    //     break;
    //     case '*' : cout << "Multiplication = " << a * b << endl;
    //     break;
    //     case '/' : cout << "division = " << a - b << endl;
    //     break;
    //     default : cout << "Invalid operator" << endl;

    // }


    return 0;
}