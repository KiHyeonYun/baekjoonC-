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

			//�빮�� �˻�
			for(int j=0; j<str[i].length(); j++){						
				if((int)str[i].at(j)>=65 && (int)str[i].at(j)<=90){
					delete [] str;
					return -1;
				}
				else 
					continue;
			}
			//�ߺ� �˻�
			for(int k=0; k<i; k++){
				if(str[i].compare(str[k]) == 0){
					delete [] str;
					return -1;
				}
				else
					continue;
			}

			//�׷�ܾ� üũ
			for(int l=0; l<str[i].length(); l++){
				groupWordChecker=true;
				for(int m=l+1; m<str[i].length(); m++){
					if(str[i].at(l)==str[i].at(m)){
						if(m-l>1){ //��ĭ���� x
							if(str[i].at(m)==str[i].at(m-1))//�ٷ� ���̶� ������ ����.
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