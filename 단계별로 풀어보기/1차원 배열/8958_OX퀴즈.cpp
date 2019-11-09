#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class OXQuiz{
	char *ox;
public:
	void setOX(char *ox);
	int score();
};
void OXQuiz::setOX(char *ox){
	this->ox = ox;
}
int OXQuiz::score(){
	int result = 0, count = 0, size = 0;
	int j=0;

	while(true){
		if(ox[j] == '\0')
			break;
		else{
			size++;
			j++;
		}
	}

	for(int i=0; i<size; i++){
		if(ox[i] =='O' || ox[i] == 'o'){
			count++;
			result += count;
		}
		else if(ox[i] =='X' || ox[i] == 'x')
			count=0;
	}

	return result;
}

//큰 주제가 1차원 배열 사용하기 이므로 str을 다시 char형 배열로 바꿈.
int main(){
	int testCaseNum;
	string str;
	
	
	OXQuiz *ox;
	cin>>testCaseNum;
	int *result = new int[testCaseNum]();
	
	ox = new OXQuiz[testCaseNum]();

	for(int i =0; i<testCaseNum; i++){
		try{
			cin>>str;
			if(str.length() <80){
				char *testCase = new char[str.length()+1]();
				strcpy(testCase,str.c_str());
				ox[i].setOX(testCase);
				result[i] = ox[i].score();
				delete testCase;
			}
			else{
				cout<<"error : testcase의 크기는 80 이하로 입력\n";
				return -1;
			}
		
		}catch(int e){
			cout<<"error code : "<< e <<"\n";
			return -1;		
		}
	}
	for(int i=0; i<testCaseNum; i++){
		cout<<result[i]<<endl;
	}

	
	delete result;
	return 0;
}