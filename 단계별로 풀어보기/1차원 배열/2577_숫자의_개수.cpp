#include<iostream>

using namespace std;

class MultiDigit{
	
	unsigned int multiply;
	int *digit;
public:
	MultiDigit(int a=0, int b=0, int c=0){this->multiply = a*b*c;}
	void cutDigit();
	void show();

};
void MultiDigit::cutDigit(){
		int temp;
		digit = new int[10]();		//�����Ҵ� �� �ʱ�ȭ
		
		for(int i = 0; i<10; i++){	//unsigned int���� ������ �ִ� �� 4,294,967,295 =>10�ڸ�
			temp = multiply%10;
			if(multiply !=0)		//10�ڸ��� �ƴϸ� �ڸ��� �߰� x
				digit[temp]++;

			multiply /=10;
		}

	}
void MultiDigit::show(){
	for(int i =0; i<10; i++)
		cout<<digit[i]<<endl;
}
int main(){

	int a,b,c;
	cin>>a>>b>>c;
	if(100<=a && 100<=b && 100<=c && a<1000 && b<1000 && c<1000){
		
		MultiDigit md(a,b,c);
		md.cutDigit();
		md.show();
	}

	return 0;
}