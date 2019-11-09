#include<iostream>

using namespace std;

class SecondNumber{

	int arr[3];
	int length;
public:
	SecondNumber(int a, int b, int c);
	int searchSecondNumber();
};
SecondNumber::SecondNumber(int a, int b, int c){
	arr[0] = a; arr[1] = b; arr[2] = c;
}
int SecondNumber::searchSecondNumber(){
	int temp;

	length = sizeof(arr)/sizeof(int);

	for(int i=0; i<length-1; i++)
		if(arr[i] < arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
		if(arr[0] < arr[1])
			temp = arr[0];
		else 
			temp = arr[1];

	return temp;
}

int main()
{
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	if(1<=arr[0] && arr[0]<=100 && 1<=arr[1] && arr[1]<=100 && 1<=arr[2] && arr[2]<=100){
	
		SecondNumber a(arr[0], arr[1], arr[2]);
		cout<<a.searchSecondNumber()<<endl;
	}
	return 0;
}