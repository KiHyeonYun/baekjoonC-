#include<iostream>

using namespace std;
int acm_room(int h, int w, int n);
int main(){
	int t;
	int h,w,n;
	int *result;

	cin>>t;
	result = new int[t];

	for(int i=0; i<t; i++){
		cin>>h>>w>>n;
		result[i] = acm_room(h,w,n);
	}
	for(int i=0; i<t; i++){
		cout<<result[i]<<'\n';
	}
	return 0;
}
int acm_room(int h, int w, int n){
		int temp,temp2;
		temp = n%h*100;//Ãþ
		temp2 = n/h+1; //È£
		
		//ÃÖ»óÃþÀÏ ¶§
		if(!temp){
			temp = h*100;
			temp2 = n/h;
		}

		return temp+temp2;
}