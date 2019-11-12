#include<iostream>

using namespace std;

int main(){

	int a, b, v;
	int temp1, temp2;
	int day;
	cin>>a>>b>>v;
	
	temp1 = v-a; //도달 높이 - 하루에 올라갈 수 있는 거리
	temp2 = a-b; //하루에 올라갈 수 있는 거리 - 잘때 떨어지는 거리
	
	//만약에 t1%t2가 0이면 t1/t2에 하루를 더하면 정상 도달가능
	//반면 t1%t2의 나머지가 1이라도 있으면 하루를 올라간 후, 잠을 자고
	//하루를 더 올라가야 함
	if(!(temp1%temp2))
		day = temp1/temp2+1; 
	else
		day = temp1/temp2+2;
	
	cout<<day<<endl;
	return 0;
}