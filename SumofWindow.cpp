#include<bits/stdc++.h>

using namespace std;
// Brute force Approch
int maxSum(int *arr, int n, int size){
	int MAX = 0;
	for(int i = 0; i<n-size;i++){
		int sum = 0;
		for(int z = i; z<i+size; z++){
			sum += arr[z];
		}
	//	cout<<" : "<<sum<<endl;
		MAX = max(MAX, sum);
	}
	return MAX;
}


//Optimal Sliding window Approch
int maxSumOpt(int *arr, int n, int size){
	int MAX = 0;
	int SUM = 0;
	for(int i = 0; i< size ; i++){
		SUM += arr[i];
	}
	MAX = max(MAX, SUM);
//	cout<<" : "<<SUM<<endl;
	for(int i = 1; i<=n-size;i++){
	//	cout<<"::>"<<arr[i+size-1]<<endl;
	 	SUM = SUM - arr[i-1] + arr[i+size-1];
	 	MAX = max(MAX, SUM);
	 //	cout<<" : "<<SUM<<endl;
	}
	return MAX;
}

int main(){
	int arr[100];
	int n;
	int size;
//	cout<<"n: "<<endl;
	cin>>n;
//	cout<<"size: "<<endl;
	cin>>size;
//	cout<<"Array: "<<endl;
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	} 
	cout<<"MAX SUM OF "<<size<<" Boxes (Brute Force Approch) : "<< maxSum(arr,n,size)<<endl;
	cout<<"MAX SUM OF "<<size<<" Boxes (Optimal Sliding window Approch ) : "<< maxSumOpt(arr,n,size)<<endl;
}
