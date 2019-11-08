//�޸� 1984KB, �ð� : 2300~2400ms ����

#include<iostream>

#define MAX 10000
using namespace std;

void counting_sort(int * index, const int size);
int main(){
	int n, temp;
	int index[MAX]={0,};
	
	cin>>n;

	for(int i=0; i<n; i++){
		//�Է¹����� ������ cin���δ� �ð� �ʰ���.
		//cin���� �ӵ��� ���� scanf�� ����.
		scanf("%d",&temp);
		//index�� �ش� ���ڰ� ��� ���Դ��� ǥ���Ѵ�.
		//�迭�� 0~9999�̹Ƿ� 0��° �迭�� ���� 1�� �����Ѵ�.
		index[temp-1]++;
	}
	counting_sort(index, n);
	return 0;
}
void counting_sort(int* index, const int size){
	
	//�ε����� �ش� ������ ����ŭ �ݺ��� ���
	for(int j=0; j<MAX; j++){
		while(index[j] != 0){
			printf("%d\n",j+1);
			index[j]--;
		}
	}
}
/*
�޸� �ʰ� �ڵ�
int main(){
	
	int n;
	int* arr;
	int* sort_arr;
	
	cin>>n;
	
	arr = new int[n];
	sort_arr = new int[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort_arr = counting_sort(arr,sort_arr, n);
	for(int i=0; i<n; i++){
		cout<<sort_arr[i]<<"\n";
	}
	
	return 0;
}
int* counting_sort(int *arr, int *sort_arr, const int size){
	int index[MAX]={0,};
	
	//������ �迭�� �ش� �� ���� �ε����� ���� 1�� �ø�
	for(int j=0; j<size; j++){
		index[arr[j]]++;
	}
	//�ش� ���� ���ĵǾ��� �� ��ġ�� �˱����� �տ������� ���� ����(��ġ��)
	for(int k=1; k<MAX; k++){
		index[k] += index[k-1];
	}
    //���İ��� ���� �迭�� ���� �ִ´�. �迭�� 0���� �������� ����
	for(int x=size-1; 0<=x; x--){
		sort_arr[index[arr[x]]-1] = arr[x];
		index[arr[x]]--; 
	}
	return sort_arr;
}
*/