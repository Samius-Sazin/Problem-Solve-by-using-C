#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    if(a % b == 0){
        for(int i=0; i<b; i++){
            cout << a/b << " ";
        }
        return 0;
    }

    int arr[b], div = a/b, rem = a%b, count = 1;

    for(int i=0; i<b; i++){
        arr[i] = div;
        if(count <= rem){
            arr[i]++;
            count++;
        }
        cout << arr[i] << " ";
    }


    return 0;
}