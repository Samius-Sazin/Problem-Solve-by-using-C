#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int i, j, count = 0;
    for(i=0; i<s.length(); i++){
        if(s[i] == '.'){
            if(s[i-1] == '9'){
                cout << "GOTO Vasilisa." << endl;
                return 0;
            }
            if(s[i+1] >= '5'){
                count = 1;
            }
            else if(s[i+1] < '5'){
                count = 2;
            }
            break;
        }
    }

    for(j=0; j<i-1; j++){
        cout << s[j];
    }

    if(count == 1){
        cout << ++s[j] << endl;
    }
    else if(count == 2){
        cout << s[j] << endl;
    }


    return 0;
}