#include<iostream>
#include<string>

using namespace std;

int main(){

	string in;
	int callTime=0;

	cin>> in;
	if(2<=in.size() && in.size() <=15){
		callTime += in.size()*2;
		for(int i=0; i<in.size(); i++){
			if(65<=in.at(i) && in.at(i)<=90){							//´ë¹®ÀÚ

				if(65<=(int)in.at(i) && (int)in.at(i)<=67)				//ABC
					callTime +=1;
				else if(68<=(int)in.at(i) && (int)in.at(i)<=70)			//DEF
					callTime +=2;
				else if(71<=(int)in.at(i) && (int)in.at(i)<=73)			//GHI
					callTime +=3;
				else if(74<=(int)in.at(i) && (int)in.at(i)<=76)			//JKL
					callTime +=4;
				else if(77<=(int)in.at(i) && (int)in.at(i)<=79)			//MNO
					callTime +=5;
				else if(80<=(int)in.at(i) && (int)in.at(i)<=83)			//PQRS
					callTime +=6;
				else if(84<=(int)in.at(i) && (int)in.at(i)<=86)			//TUV
					callTime +=7;
				else if(87<=(int)in.at(i) && (int)in.at(i)<=90)			//WXYZ
					callTime +=8;	
			}
			else
				return -1;

			if(in.size()-1 == i)
				cout<<callTime<<endl;
		}
	}
	return 0;
}