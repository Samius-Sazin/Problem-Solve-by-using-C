#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;

    while(t--){
        int numb_bag, min;
        cin >> numb_bag >> min;

        multiset <long long> s;

        for(int i=0; i<numb_bag; i++){
            long long num_of_candy; cin >> num_of_candy;
            s.insert(num_of_candy);
        }

        long long ttl_candy = 0;

        for(int i=0; i<min; i++){
            auto last_element = --s.end();
            ttl_candy += *last_element;
            long long candy_count = *last_element;
            s.erase(last_element);
            s.insert(candy_count/2);
        }

        cout << ttl_candy << endl;
    }
}
