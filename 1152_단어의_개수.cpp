#include<iostream>

using namespace std;
int main(){

	char word[1000000]={};
	int count = 0;

	cin.getline(word,sizeof(word));
	
	if(word[0] != ' ' && word[0] != '\0')			//ó���� ������ �ƴϰ� ���Ṯ�ڰ� �ƴ϶�� �ܾ��� �����̹Ƿ� +1
	count ++;
	
	for(int i=0; i<sizeof(word); i++){				
		if(word[i]!=NULL &&word[i+1]!=NULL){		//i��°�� i+1��° ���ڰ� ���Ṯ�ڰ� �ƴ� ��
			if(word[i] == ' ' && word[i+1] !=' ')	//���� i��°�� i+1��°�� �Ѵ� ������ �ƴ϶�� +1
				count ++;
		}
	}
	cout<< count<<endl;



	return 0;
}