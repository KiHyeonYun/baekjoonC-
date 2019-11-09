/*
	t : test case ��
	k : ��
	n : ȣ
	�߰� : ** ���ͷ� Ǯ�� ����**
*/
#include<iostream>
#include<vector>

#define MAX_FLOOW 15
#define MAX_ROOM  15

using namespace std;

//2���� �迭 return ����
void init_apt(int apt[][MAX_ROOM]);

int main(){
	int apt[MAX_FLOOW][MAX_ROOM];
	int t;
	int k,n;
	vector<int> n_list, k_list;	
	
	init_apt(apt);
	cin>>t;
	
	//t��ŭ �Է�
	for(int i=0; i<t; i++){
		cin>>k>>n;	
		k_list.push_back(k);	
		n_list.push_back(n-1);
	}

	//�ο��� ���
	for(int i=0; i<t; i++){
		cout<<apt[k_list.at(i)][n_list.at(i)]<<'\n';
	}

	return 0;
}
void init_apt(int apt[][MAX_ROOM]){
	
	for(int i=0; i<MAX_FLOOW; i++){
		for(int j=0; j<MAX_ROOM; j++){
			if(!i){
				apt[i][j] = j+1;
				apt[j][i] = 1;
				//cout<<'['<<apt[i][j]<<']';
			}
			else{
				if(j!=0){
					/*
					���� �� ���� ���� ���� �� ���� ���� ���� ���ϸ鼭
					���� ȣ�� �ο����� ����
					*/
					apt[i][j] = apt[i][j-1] + apt[i-1][j];	
				}
				//cout<<'['<<apt[i][j]<<']';
			}
		}
		//cout<<"\n";
	}
}