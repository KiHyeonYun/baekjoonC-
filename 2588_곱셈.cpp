#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

class Multi{
	int x, y;
	int tmpX[3], tmpY[3];
	int result[4];
public:
	Multi(){};
	Multi(int x, int y); 
	void op(int index);
	int getResult();
		
};
Multi::Multi(int x=0, int y=0){
	this->x = x;
	this->y = y;
	
	tmpX[0] = x%10;
	tmpX[1] = x%100/10;
	tmpX[2] = x/100;
	
	tmpY[0] = y%10;
	tmpY[1] = y%100/10;
	tmpY[2] = y/100;

	memset(result,0,sizeof(result));
}
int Multi::getResult(){
	int tenSq = 1;

	for(int i=0; i<3; i++){
		if(i!=0)
			tenSq *=10;
		result[3] +=result[i]*tenSq;
	}
	return result[3];
}
void Multi::op(int index){
	int tmpRes[4]={0,};
	for(int i=0; i<3; i++){
		tmpRes[i] = tmpY[index]*tmpX[i];
			for(int j=0; j<i; j++)
				tmpRes[i] *= 10;
	
			tmpRes[3] += tmpRes[i];										
	}
	result[index] = tmpRes[3];
	cout<<result[index]<<endl;
}

int main(){
	int x, y;
	int res[4];
	cin>>x>>y;
	Multi multi(x,y);
			
	//(3) 
	multi.op(0);
	
	//(4)
	multi.op(1);
	
	//(5)
	multi.op(2);
	
	//(6)
	cout<<multi.getResult()<<endl;

	return 0;
}