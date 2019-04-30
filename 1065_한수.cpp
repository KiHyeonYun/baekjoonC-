#include<iostream>
#define MAX 1000
using namespace std;
int hanSu(int n);
int main()
{
	int n;
	int result=0;
	cin>>n;
	
	if(1<=n && n<=MAX){
		for(int i =1; i<=n; i++)
		result += hanSu(i);

		cout<<result<<endl;
	}

	return 0;
}
int hanSu(int n){
	int digit=0;
	int temp=n;

	if(n < 100)										//99까지는 모두 한수임
		return 1;
	else if(n == 1000)								//1000은 한수 아님 (없어도 됨)
		return 0;

	do{												//n의 자리 수를 구한다.
		digit++;
		temp = temp/10;
	}while(temp!=0);
	
	temp = 1;
	int* han = new int[digit];						//자리수 크기만큼 동적할당을 받는다.
	han[0] = n%10;									//자리마다 수를 넣는다.
	han[1] = n%100/10;
	han[2] = n/100;
	
	int past = han[0] - han[1], present;			//비교할 대상 중 앞
	int result=1;
	for(int i=1; i<digit-1; i++){					//한수 체크
		present = han[i]-han[i+1];					//비교할 대상 중 뒤
		
		if(past == present)
			continue;
		else{
			result=0;
		}	
	}
	delete han;
	return result;
}