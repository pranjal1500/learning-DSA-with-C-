/*sum of all numbers from 1 to n which are divisible by 3*/
#include<iostream>
using namespace std;

int main(){
    // int n=15;
    // int sum = 0;
    // for(int i=1; i<=n ;i++){
    //     if(i%3==0){
    //         sum +=i;
    //     }
    // }
    int n, sum = 0;
    int i=1;
    cout << "Enter n : ";
    cin >> n;
    while(i<=n){
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;
    return 0;
}