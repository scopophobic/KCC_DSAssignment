#include <bits/stdc++.h>
using namespace std;

void solution() {
     int n, x;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        arr[i]=x;
     }
     for(int i =0;i<n;i++){
         cout<<arr[i]<<endl;
     }
}

int main () {
    solution();
    return 0;
}
