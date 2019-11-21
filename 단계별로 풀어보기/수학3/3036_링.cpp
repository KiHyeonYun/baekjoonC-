#include<iostream>
#include<vector>

using namespace std;
int gcd(int a, int b);
int main()
{
  
  int n, input;
  cin>>n;
  vector<int> r;
  vector<int> gcds; 
  for(int i=0; i<n; i++){
      cin>>input;
      r.push_back(input);
  }
  
  for(int i=1; i<n; i++){
      gcds.push_back(gcd(r.at(0),r.at(i)));
  }
  for(int i=1; i<n; i++){
      cout<<r.at(0)/gcds.at(i-1)<<'/'<<r.at(i)/gcds.at(i-1)<<'\n';
  }
   return 0;
}
int gcd(int a, int b){
    while(b!=0){
      int c = a%b;
      a=b;
      b=c;
    }
    return a;
}