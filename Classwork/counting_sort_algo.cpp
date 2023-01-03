/*
    Count Sort Algorithm
    **Time Complexity: O(n)
    **Space Complexity: O(max_number-min_number) //no additional space is required
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
    //traverse all the element and print them
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";    
    }
    cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
    vector<int>arr(10);
    for(int i=0;i<A.size();i++){
        arr[A[i]]++;
    }
    A.clear();
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i];j++){
            A.push_back(i);
        }
    }
    //write the code for count sort
    
}

int main() {
    init_code();
    vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
    // your code goes here
    sort(A);
    cout<<"sorted vector: ";
    printVector(A);
    
    return 0;
}
