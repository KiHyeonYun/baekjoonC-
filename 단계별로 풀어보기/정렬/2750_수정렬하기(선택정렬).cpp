#include<iostream>

using namespace std;

int* selection_sort(int *arr, int length);

int main(){

	int* arr;
	int n;

	cin>>n;
	arr = new int [n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	arr = selection_sort(arr, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<'\n';
	}
	delete(arr);

	return 0;
}
int* selection_sort(int *arr, int length){
	int least,temp;

	for(int i=0; i<length-1; i++){
			least = i;
		for(int j=i+1; j<length; j++){
			if(arr[least] > arr[j])
				least = j;
		} 
		//swap
		temp = arr[i];
		arr[i] = arr[least];
		arr[least] = temp;
	}
	return arr;
}