#include<iostream>
using namespace std;
int Linear_Search(int arr[], int n, int key);
int main(){
    int arr[10], n, pos, key;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter number to search in an array : ";
    cin >> key;
    pos = Linear_Search(arr, n, key);
    if(pos == -1){
        cout << "Key not found" << endl;
    } else {
        cout << key << " found at " <<"position " << pos+1 << endl;
    }
    return 0;
}

int Linear_Search(int arr[],int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}