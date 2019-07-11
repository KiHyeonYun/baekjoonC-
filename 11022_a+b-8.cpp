#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t, a, b;
	vector<int> num;
	
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
		cin>>a>>b; 	
	
		if(0<a && b<10)
		{	
			num.push_back(a);
			num.push_back(b);
			num.push_back(a+b);
		}

		else
			return -1;
	}
	
	t=0;
	
	for(int i=0; i<num.size(); i+=3){
		t++;
		cout<<"Case #"<<t<<": "<<num.at(i) <<" + "<<num.at(i+1)<<" = " <<num.at(i+2) <<endl;
	}

	return 0;
}