#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s.find("1") < s.find("3")){
            cout << "13" << endl;
        }
        else{
            cout << "31" << endl;
        }
    }
}





// int main(){
//     int t; cin >> t;
//     while(t--){
//         string s; cin >> s;
//         for(int i=0; i<s.size(); i++){
//             if(s[i] == '1'){
//                 cout << "13" << endl;
//                 break;
//             }
//             else if(s[i] == '3'){
//                 cout << "31" << endl;
//                 break;
//             }
//         }
//     }
// }