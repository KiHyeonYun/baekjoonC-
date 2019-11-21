#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a;
    unsigned int n;
    vector<unsigned int> factor;
    int input;
    
    cin>>a;
    
    for(int i=0; i<a; i++){
        cin>>input;
        factor.push_back(input);
    }
    sort(factor.begin(), factor.end());
    
    cout<<factor.at(0)*factor.at(a-1);

    return 0;
}