#include<iostream>
#include<string>
#define MAX 1000

using namespace std;

class seajunScore{
	double score[MAX];
	double avg;
public:
	seajunScore();
	void Scorefabrication(int n);

};
seajunScore::seajunScore(){
	avg = 0;
}
void seajunScore::Scorefabrication(int n){
	int i=0, sindex=0,rindex,temp=-1, count, sum;
	string sc, part;
	getline(cin, sc);
	while(true)
	{
		rindex = sc.find(' ', sindex);
		if(rindex != -1){
			count = rindex - sindex;
			part = sc.substr(sindex, count);
			score[i] = stoi(part);
			sindex = ++rindex;
				
			if(temp<score[i])
				temp = score[i];
			i++;
		}
		else{
			part = sc.substr(sindex);
			if(part == "")
				break;
			score[i]=stoi(part);
		
			if(temp<score[i])
				temp = score[i];
			break;
		}
	}
	
	for(i=0; i<n; i++){
		score[i] = (score[i]/temp)*100;
		avg += score[i];
	}
	avg /= n;
	cout<<avg;
}
int main()
{
	int n;
	seajunScore ss;
	cin>>n;
	cin.get();
	if(0<=n && n<=1000){
		ss.Scorefabrication(n);
	
	}
	return 0;
}