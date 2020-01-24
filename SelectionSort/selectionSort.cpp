#include <iostream>
using namespace std;
int main(){
	//declaring variables and array
	int n,i,j,temp,min;
	int arr[100];
	//taking user input for number of terms in array
	cout<<"Enter number of terms: "<<endl;
	cin>>n;
	//taking array as input from user
	cout<<"Enter array: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	//sorting algorithm
	for(i=0;i<n-1;i++){
		//finding minimum in unsorted array
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<min){
				min=j;
			}
		}
		//swap minimum found element with first element
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	//printing out sorted array
	cout<<"Sorted array: "<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
