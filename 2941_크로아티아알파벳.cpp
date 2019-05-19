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
	int i=0;			//비교할 크로아티아 문자 string 위치
	int location;		//찾은 위치
	int count=0;		//크로아티아 문자 수
	while(str.size()!=0){
		if(str.find(croAlpha[i]) != string::npos){
			location=str.find(croAlpha[i]);
			if(i != 2)
				str.replace(location,2," ");		//크로아티아 문자 "dz="를 뺀 나머지를 찾았으면 그 문자크기 만큼 공백으로 바꿈
			else
				str.replace(location,3," ");		//크로아티아 문자 "dz="를 찾았으면 그 문자 크기 만큼 공백으로 바꿈
		}
		else{
			if(i<8)
				i++;
			else
				break;
		}
	}
	return str.size();								//replace를 통해 크로아티아 문자들을 공백(크기=1)으로 바꾼 str의 size를 return

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