#include<bits/stdc++.h>
using namespace std;

bool solve(int num){
    int luckyArr[] = {4, 44, 444, 47, 447, 474, 477, 7, 77, 777, 74, 744, 774, 747};
    int size = sizeof(luckyArr)/sizeof(int);

    for(int i=0; i<size; i++){
        if(num % luckyArr[i] == 0){
            return true;
        }
    }
    string str = to_string(num);
    int i = 0;
    while(i < str.length()){
        if(str[i] != '4' && str[i] != '7'){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int num; cin >> num;
    if(solve(num)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}