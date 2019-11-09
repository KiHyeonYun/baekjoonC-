#include<iostream>
#include <string.h>

using namespace std;

int main()
{

	int a,i,temp=0;
	char num[100];
	memset(num,NULL,sizeof(num));
	cin>>a;
	cin>>num;

	if(1<=a && a<=100){

		for(i = 0; i<a; i++){
			if(!num[i]==0)
			temp += (int)num[i]-48;
		}
		cout<<temp;
		
	}
	return 0;
}