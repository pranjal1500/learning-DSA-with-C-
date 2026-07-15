/*write a program to sum even numbers from 1 to N*/
#include<iostream>
using namespace std;

int main(){
    int n,evenSum = 0;
    cout <<"Enter number : ";
    cin >> n;
    for(int i=0; i<=n; i++){
        if(i%2==0){
            evenSum += i;
        }
    }

    cout << "Even sum = " << evenSum << endl;
    return 0;
}