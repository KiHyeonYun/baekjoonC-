#include<iostream>

using namespace std;

int main(){
	int x, i=0,j=1,k=1;
	int diagonalNumber, dnTmp; //���° �밢�ΰ�?
	cin>>x;

	if(1<=x && x<=10000000){
		
			
		while(true){
			i++;	
			diagonalNumber =(i*i+i)/2;
			if(diagonalNumber>x){ //x�� �迭�� ���° �밢�� ���ԵǴ��� Ȯ��
				dnTmp = (i-1)*i/2;
				if(i%2 == 1){
					k=i;
					j=1;
					if(x-1 !=dnTmp){ 
						for(int a=dnTmp; a<x-1; a++){
							k--; 
							j++;
						}
					}
					cout<<k<<"/"<<j<<endl;
				}
				else{
					k=1;
					j=i;
					if(x-1 !=dnTmp){ 
						for(int a=dnTmp; a<x-1; a++){
							k++; 
							j--;
						}
					}
					cout<<k<<"/"<<j<<endl;
				}
				break;
			}
			else if(diagonalNumber==x){
				if(i%2 == 1){
					cout<<"1/"<<i<<endl;
				}
				else{
					cout<<i<<"/1"<<endl;
				}
				break;
			}
		}
	}
	
	return 0;
}