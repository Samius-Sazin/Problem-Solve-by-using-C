#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
using namespace std;

int solve(int *arr, int n){
   int c = 0;
   for(int i=1; i<n; i++){
      if(arr[0] != arr[i]){
         c = 1; break;
      }
   } if(c == 0){
      return 1;
   }

   int lis[2][n+1];
   memset(lis, 0, sizeof(lis));
   lis[0][0] = INT_MIN;
   //  lis[2][0] = -1;

   int ans = 0;

   for(int cc=1; cc<n+1; cc++){
   lis[0][cc] = arr[cc-1];
   for(int c=0; c<cc; c++){
      if(lis[0][c] < lis[0][cc]){
         int ck = lis[1][cc];
         lis[1][cc] = max(lis[1][cc], lis[1][c] + 1);
         ans = max(ans, lis[1][cc]);

         // if(ck != lis[1][cc] && ){
         //    lis[2][cc] = c;
         // }
      }
   }
   }

    return ans;
}

int main(){
   int n; cin >> n;
   int arr[n];
   
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }

   cout << solve(arr, n) << endl;

   return 0;
}