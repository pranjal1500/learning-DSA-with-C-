/*Sum of all Odd numbers from 1 to N*/
#include<iostream>
using namespace std;
            
int main(){
    // int n = 50;
    // int oddSum = 0;
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0){
    //         oddSum += i;
    //     }
    // }

    // cout << "odd sum = " << oddSum << endl;

    int n, oddSum = 0;
    cout << "Enter n : ";
    cin >> n;
    int i =1;
    while(i<=n){
        if(i%2!=0){
            oddSum += i;
        }
        i++;
    }

    cout << "odd sum = "<< oddSum << endl;
    return 0;
}