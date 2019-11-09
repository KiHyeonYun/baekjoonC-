#include<iostream>
#define MAX_RANGE 10000
#define MIN_RANGE -10000

using namespace std;

bool range(int x, int y){
	if(MIN_RANGE < x && x<MAX_RANGE){
		if(MIN_RANGE < y && y<MAX_RANGE){
			return true;
		}
		else{
		//	cout<<"y range is overflow!"<<endl;
			return false;
		}
	}
	else{
	//	cout<<"x range is overflow!"<<endl;
		return false;
	}
}
int main(){

	int x,y;
	cin>>x>>y;
	if(range(x,y)){
		if(x>y)
			cout<<">"<<endl;
		else if(x<y)
			cout<<"<"<<endl;
		else
			cout<<"=="<<endl;
	}
	return 0;
}