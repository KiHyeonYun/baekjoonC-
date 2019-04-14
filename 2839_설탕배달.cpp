#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,j, n, k=0;
	int SmallestNumber[1000];
	memset(SmallestNumber,0,sizeof(SmallestNumber));
	cin>>n;

	if(3 <=n && n<=5000){
		for(i = 0; i<n/3+1; i++)
			for(j = 0; j<n/5+1; j++){
				if(3*i+5*j==n)
					SmallestNumber[k++] =i+j;
			}
		if(SmallestNumber[0] !=NULL)
			for(i=0; i<sizeof(SmallestNumber)/sizeof(int); i++){
				if(SmallestNumber[i] !=NULL && SmallestNumber[i] <= SmallestNumber[0]){
						SmallestNumber[0] = SmallestNumber[i];
						cout<<SmallestNumber[0]<<endl;
				}
				else
					break;
			}
		else
			cout<<"-1"<<endl;
	}

	return 0;
}