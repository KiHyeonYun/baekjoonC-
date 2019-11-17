#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

	int x,y,w,h;
	int xr,yr;
	int xtemp, ytemp;
	cin>>x>>y>>w>>h;

	xr = w-x;
	yr = h-y;

	xtemp = xr < x ? xr:x;
	ytemp = yr < y ? yr:y;
	
	xtemp < ytemp ? cout<<xtemp : cout<<ytemp;

	return 0;
}