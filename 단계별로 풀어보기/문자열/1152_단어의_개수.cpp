#include<iostream>

using namespace std;
int main(){

	char word[1000000]={};
	int count = 0;

	cin.getline(word,sizeof(word));
	
	if(word[0] != ' ' && word[0] != '\0')			//처음이 공백이 아니고 종료문자가 아니라면 단어의 시작이므로 +1
	count ++;
	
	for(int i=0; i<sizeof(word); i++){				
		if(word[i]!=NULL &&word[i+1]!=NULL){		//i번째와 i+1번째 문자가 종료문자가 아닐 때
			if(word[i] == ' ' && word[i+1] !=' ')	//또한 i번째와 i+1번째가 둘다 공백이 아니라면 +1
				count ++;
		}
	}
	cout<< count<<endl;



	return 0;
}