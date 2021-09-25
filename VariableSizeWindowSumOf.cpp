#include<bits/stdc++.h>
using namespace std;

int maxLen(int *arr, int n, int con){

    int i = 0;
    int z = 0;
    int maxSize = 0;
    int sum = 0;
    while(z< n){
        
        sum += arr[z];
        
        if(sum < con) z++ ;
        else if(sum == con) maxSize = max(maxSize, z-i+1);
        else if( sum > con ){
            while(sum > k ){
                sum-= arr[i];
                i++;
            }
            z++;
        }
    }
    return maxSize;
}



int main(){
    int arr[100];
    int n; 
    int con;
    cin>>n>>con;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Max length of sub array: "<< maxLen(arr,i,con);
}