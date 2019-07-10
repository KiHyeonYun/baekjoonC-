#include<iostream>
using namespace std;

class Alaram{
	int h, m;
public:
	Alaram(int h,int m);
	int getHour(){return h;}
	int getMinute(){return m;}
};
Alaram::Alaram(int h=0,int m=0){ 
	this->m = m - 45;
	if(this->m>=0){
		this->h = h;
	}
	else if(this->m<0){
		this->m +=60; 
		
			if(h!=0)
				this->h = h-1;
		
			else
				this->h = 23;
	}

}

int main(){
	int h, m;
	cin>>h>>m;
	if(0<=h && h<=23 && 0<=m && m<=59){
		Alaram alaram(h,m);
		cout<<alaram.getHour()<<" "<<alaram.getMinute()<<endl;
	}

	return 0;
}