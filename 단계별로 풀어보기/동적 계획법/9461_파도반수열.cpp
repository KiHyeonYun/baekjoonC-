#include<iostream>

#define MAX_LEN 100
#define MIN_LEN 1

using namespace std;

void init(long long *triangle_side_len);
int main(){
    
    int t,n;
    long long *triangle_side_len;
    long long *result;
  
    cin>>t;
  
    triangle_side_len = new long long[MAX_LEN];
    result = new long long[t];
    
    init(triangle_side_len);
    
    for(int i=0; i<t; i++){
        cin>>n;
        result[i] = triangle_side_len[n-1];
    }
    for(int j=0; j<t; j++){
        cout<<result[j]<<'\n';
    }
    
    delete[] triangle_side_len;
    delete[] result;
    return 0;
}
void init(long long *triangle_side_len){
	
    triangle_side_len[0] = MIN_LEN;
    triangle_side_len[1] = MIN_LEN;
    triangle_side_len[2] = MIN_LEN;
    triangle_side_len[3] = MIN_LEN*2;
    triangle_side_len[4] = MIN_LEN*2;
    
    for(int i=5; i<MAX_LEN; i++){
        triangle_side_len[i] = triangle_side_len[i-5] + triangle_side_len[i-1];
    }
}