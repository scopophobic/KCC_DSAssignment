#include <iostream>
using namespace std;
const int N=100;

//countNumberOfTimesTargetIsInDiagonal containing row, col
int count(int n, int A[][N], int row, int col, int target){
	int ans=0;
	for(int i=row , j=col;i>=0 && j<n;i-- , j++){
		if(A[i][j]==target){
			ans++;
		}
	}
	for(int i=row , j=col;i<n && j<n;i++ , j++){
		if(A[i][j]==target){
			ans++;
		}
	}
	for(int i=row , j=col;i<n && j>=0;i++ , j--){
		if(A[i][j]==target){
			ans++;
		}
	}

    for(int i=row , j=col;i>=0 && j>=0;i-- , j--){
		if(A[i][j]==target){
			ans++;
		}
    }

    if(A[row][col]==target){
        ans-=3;
    }
	return ans;
}

int main() {
	int n=4;
	//cin>>n;
	int A[N][N];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<count(n, A, 2, 2, 2)<<"\n";
	return 0;
}
