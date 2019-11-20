#include<iostream>

using namespace std;

int greatestCommonDivid(int a, int b);
int LeastCommonMultiple(int a, int b, int lcm);

int main(){
    
    int a, b;
    
    cin>>a>>b;
    int gcd = greatestCommonDivid(a,b);
	cout<<gcd<<'\n';
	cout<<LeastCommonMultiple(a,b,gcd)<<'\n';
    return 0;
}
int greatestCommonDivid(int a, int b){
	while(b){
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}
int LeastCommonMultiple(int a, int b, int gcd){
    return a*b/gcd;
}