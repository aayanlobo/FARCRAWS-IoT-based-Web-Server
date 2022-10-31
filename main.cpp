#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){

     int i = 0;
     for(int j =1;j<n;j++){
             if(arr[j] > arr[i]){
                 i = j;
         };
        
        }
        return i;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
       int n;
      cin >> n;
     int arr[n];
     for(int i =0;i<n;i++){
         cin >> arr[i];
     }
     int x = getLargest(arr,n);
     int y = 0;
     for(int j = 1;j<n;j++){
         if(arr[j] != arr[x]){
             if(arr[j]>arr[y]){
                 y = j;
             }
         }
     }
     if(arr[y] != arr[x]){
     cout << arr[y];
     }
     else {
         cout << -1;
     }
     
    
        
    return 0;
}
