//메모리 1984KB, 시간 : 2300~2400ms 사이

#include<iostream>

#define MAX 10000
using namespace std;

void counting_sort(int * index, const int size);
int main(){
	int n, temp;
	int index[MAX]={0,};
	
	cin>>n;

	for(int i=0; i<n; i++){
		//입력받을게 많으면 cin으로는 시간 초과됨.
		//cin보다 속도가 빠른 scanf로 받음.
		scanf("%d",&temp);
		//index에 해당 숫자가 몇번 나왔는지 표시한다.
		//배열이 0~9999이므로 0번째 배열의 값은 1로 생각한다.
		index[temp-1]++;
	}
	counting_sort(index, n);
	return 0;
}
void counting_sort(int* index, const int size){
	
	//인덱스에 해당 숫자의 값만큼 반복해 출력
	for(int j=0; j<MAX; j++){
		while(index[j] != 0){
			printf("%d\n",j+1);
			index[j]--;
		}
	}
}
/*
메모리 초과 코드
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
	
	//정렬할 배열의 해당 값 마다 인덱스에 값을 1씩 올림
	for(int j=0; j<size; j++){
		index[arr[j]]++;
	}
	//해당 값의 정렬되었을 때 위치를 알기위해 앞에서부터 값을 더함(위치값)
	for(int k=1; k<MAX; k++){
		index[k] += index[k-1];
	}
    //정렬값을 넣을 배열에 값을 넣는다. 배열은 0부터 시작함을 주의
	for(int x=size-1; 0<=x; x--){
		sort_arr[index[arr[x]]-1] = arr[x];
		index[arr[x]]--; 
	}
	return sort_arr;
}
*/