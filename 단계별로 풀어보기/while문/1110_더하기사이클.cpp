#include<iostream>

using namespace std;
int main(){
	
	int n,j,k, temp;
	int count=0;
	cin>>n;
	temp = n;
	if(0<=n && n<=99){
		do{
			j = temp/10 + temp%10;		//cout<<"j =" << j;
			k = temp%10*10 + j%10;		//cout<<"\tk =" << k <<endl;
			temp=k;
			count ++;
		}while(n!=k);
	}
	cout<< count<<endl;
	

	return 0;
}