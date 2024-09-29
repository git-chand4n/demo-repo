#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int x) {
     int low = 0;
     int high = n-1;
     int ans = n;
     while(low<=high) {
        int mid = (low + high) / 2;
        if(x<=arr[mid]){ // in upper bound it is x < arr[mid];
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
     }
     return ans;
}
int main(){
    int n = 10;
    int arr[10] = {1,2,3,3,5,8,8,10,10,11};
    int x;
    cin>>x;
    cout<<binary_search(arr,n,x);
    return 0;
}

// you dont need to write this for lower bound use
// lower_bound(arr,arr+n); this gives an iterator