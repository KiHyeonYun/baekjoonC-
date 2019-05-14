#include<iostream>
#include<string>

using namespace std;
class QRcode{
	string alphanumeric;
	bool check;
protected:
	bool getCkeck(){return check;}
	QRcode(){this->alphanumeric= "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\\$%*+-./:";}
	
	bool ckeckQRcode(string s);
};
bool QRcode::ckeckQRcode(string s){
	if(s.length() > 0 && s.length() <=20){
		for(int i=0; i<s.length(); i++){
			if(alphanumeric.find(s.at(i)!=string::npos)){
					if(97<=(int)s[i] && (int)s[i]<=122){
						check = false;
						break;
					}
					else{
						check = true;
						continue;
					}
				}
				else{
					check = false;
					break;
				}
			}
	}
	
	return check;
}

class RepeatAlpa : public QRcode{
	int R;
	string S;
public:
	RepeatAlpa(){};
	void show();
	void setR(int R){this->R=R;}	
	void setS(string S){S.erase(0,1);this->S=S;}
	string getS(){return this->S;}
};
void RepeatAlpa::show(){
	bool t;
	t = ckeckQRcode(S);
	if(t){
		for(int i = 0; i<S.length(); i++){
			for(int j = 0; j<R; j++){
				cout<<S.at(i);
			}
		}
			cout<<endl;
	}

}

int main(){
	
	int T,R;
	string S;
	cin>>T;

	if(1<=T && T<=1000){
		RepeatAlpa* ra = new RepeatAlpa[T];

		for(int i=0; i<T; i++){
			cin>>R;
			getline(cin, S);
			ra[i].setR(R);
			ra[i].setS(S);
			
		}
		for(int i=0; i<T; i++)
			ra[i].show();

	}

	return 0;
}