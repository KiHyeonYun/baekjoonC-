#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	honoi() �Լ�
	in :: ���� ����
	tower :: 2���� vector �迭
*/
void hanoi(int in, char from, char by, char to);

int main(){
	int input, cnt=1;
	cin>>input;
	
	if(1<=input && input<=20){
		for(int i=0; i<input-1; i++)
			cnt
		hanoi(input, '1','2','3',cnt);
		
	}

	

	return 0;
}
void hanoi(int in,  char from, char by, char to){
	if(in>1){
		hanoi(in-1, from,to,by);
		cout<<from<<" "<<to<<endl;
		hanoi(in-1, by,from,to);
	}
	else
		cout<<from<<" "<<to<<endl;
}