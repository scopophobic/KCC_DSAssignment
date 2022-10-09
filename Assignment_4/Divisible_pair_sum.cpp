#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k,s,p=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((arr[i]+arr[j])%k==0){
                    if(i < j) p++;
                }
            }
    }
    cout<<p;
    return 0;
}
