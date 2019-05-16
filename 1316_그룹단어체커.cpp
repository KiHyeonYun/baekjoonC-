#include<iostream>
#include<string>
using namespace std;
int main(){

	
	int groupWordCount=0, n;
	bool groupWordChecker=true;

	cin>>n;
	if(0<n && n<=100){
		string *str = new string[n];
		for(int i=0; i<n; i++){
			cin>>str[i];

			//대문자 검사
			for(int j=0; j<str[i].length(); j++){						
				if((int)str[i].at(j)>=65 && (int)str[i].at(j)<=90){
					delete [] str;
					return -1;
				}
				else 
					continue;
			}
			//중복 검사
			for(int k=0; k<i; k++){
				if(str[i].compare(str[k]) == 0){
					delete [] str;
					return -1;
				}
				else
					continue;
			}

			//그룹단어 체크
			for(int l=0; l<str[i].length(); l++){
				groupWordChecker=true;
				for(int m=l+1; m<str[i].length(); m++){
					if(str[i].at(l)==str[i].at(m)){
						if(m-l>1){ //한칸차이 x
							if(str[i].at(m)==str[i].at(m-1))//바로 앞이랑 같은지 본다.
								continue;
							else{
								groupWordChecker = false;
								break;
							}
						}
						else
							continue;
							
						}	
				}
				if(!groupWordChecker)
					break;
			}
			if(groupWordChecker)
				groupWordCount++;
		}
	cout<<groupWordCount<<endl;
	delete [] str;
	}
	
	return 0;
}