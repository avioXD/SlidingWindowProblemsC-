#include<bits/stdc++.h>
#include <vector>
using namespace std;


//Brute force Approch
void firstNegative(int *arr, int n , int size){

	bool flag;
	 
	for(int i = 0; i<(n-size+1); i++){
		flag = false;
		
		for(int z = 0; z<size; z++){
			
			if(arr[i+z] < 0){
			 	cout<<":> "<< arr[i+z] << endl;
			 	flag = true;
			 	break;
			}
		}
		
		if(!flag){
			cout<< ":> 0" << endl;
		}
	}
}
//Space And Time Optimal Approch:

void firstNegativeOpt(int *arr, int n , int size){
 	
	 int firstNegativeIndex = 0;
 	int firstNegativeElement ;
 	
 	for(int i = size - 1; i< n; i++){
 		
		 while((firstNegativeIndex < i) && (firstNegativeIndex <= (i - size) || arr[firstNegativeIndex]>0)){
		 	firstNegativeIndex++;
		 }
		 
		 if(arr[firstNegativeIndex] < 0)
        {
            firstNegativeElement = arr[firstNegativeIndex];
        }
        else
        {
            firstNegativeElement = 0;
        }
        cout<<":>>"<< firstNegativeElement << endl;
	 }
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
//Brute force Approch:
	//firstNegative(arr,n,size);
//Space And Time Optimal Approch:
    firstNegativeOpt(arr,n,size);
}
