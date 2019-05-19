#include<iostream>
#include<string>

using namespace std;
class croatiaAlphabet{
	string croAlpha[8];
public:
	croatiaAlphabet();
	int countCroatiaAlpha(string str);
};
croatiaAlphabet::croatiaAlphabet(){
		croAlpha[0] = "c=";		
		croAlpha[1] = "c-";		
		croAlpha[2] = "dz=";	
		croAlpha[3] = "d-";		
		croAlpha[4] = "lj";
		croAlpha[5] = "nj";
		croAlpha[6] = "s=";
		croAlpha[7] = "z=";
	};
int croatiaAlphabet::countCroatiaAlpha(string str){
	int i=0;			//���� ũ�ξ�Ƽ�� ���� string ��ġ
	int location;		//ã�� ��ġ
	int count=0;		//ũ�ξ�Ƽ�� ���� ��
	while(str.size()!=0){
		if(str.find(croAlpha[i]) != string::npos){
			location=str.find(croAlpha[i]);
			if(i != 2)
				str.replace(location,2," ");		//ũ�ξ�Ƽ�� ���� "dz="�� �� �������� ã������ �� ����ũ�� ��ŭ �������� �ٲ�
			else
				str.replace(location,3," ");		//ũ�ξ�Ƽ�� ���� "dz="�� ã������ �� ���� ũ�� ��ŭ �������� �ٲ�
		}
		else{
			if(i<8)
				i++;
			else
				break;
		}
	}
	return str.size();								//replace�� ���� ũ�ξ�Ƽ�� ���ڵ��� ����(ũ��=1)���� �ٲ� str�� size�� return

}
int main(){
	
	string in;
	croatiaAlphabet ca;

	cin>>in;
	if(0<in.size() && in.size()<=100){
		cout<<ca.countCroatiaAlpha(in)<<endl;
	}


	return 0;
}