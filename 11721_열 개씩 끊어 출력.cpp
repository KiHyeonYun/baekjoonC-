#include<iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	int i;
	char str[100];
	memset(str,NULL,sizeof(str));

	cin>>str;

	for(i=1; i<=sizeof(str); i++){
		if(str[i-1] != NULL){
		
		putchar(str[i-1]);
		
			if(i%10==0)
				cout<<'\n';	
		}
	}
	return 0;
}