#include<bits/stdc++.h>
using namespace std;

long long int invCnt = 0;

void merge(int *arr, int si, int mid, int ei){
    int i = si;
    int j = mid+1;
    
    int xrr[ei - si + 1];
    int k = 0;

    while(i <= mid && j<=ei){
        if(arr[i] > arr[j]){
            xrr[k++] = arr[j++];

            //counting inversion
            invCnt += mid - i + 1;
        }
        else{
            xrr[k++] = arr[i++];
        }
    }

    while(i <= mid){
        xrr[k++] = arr[i++];
    }

    while(j <= ei){
        xrr[k++] = arr[j++];
    }

    for(i = si; i<=ei; i++){
        arr[i] = xrr[i - si];
    }
}

void mergeSort(int *arr, int si, int ei){
    if(si >= ei) return;

    int mid = si + (ei-si)/2;
    mergeSort(arr, 0, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        int n; scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        invCnt = 0;
        mergeSort(arr, 0, n-1);

        cout << invCnt << endl;
    }
}