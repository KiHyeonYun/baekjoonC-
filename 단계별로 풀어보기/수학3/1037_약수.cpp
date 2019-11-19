#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int divNum=2;
    vector<int> res;
    vector<int>::iterator iter;
    cin>>n;
    if(n==1)return 0;
    
    while(n!=1){
        if(!(n%divNum)){
                res.push_back(divNum);
                n/=divNum;
        }
        else{
            divNum++;   
        }
    }
    for(iter=res.begin(); iter<res.end(); iter++){
        cout<<*iter<<'\n';
    }
    return 0;
}