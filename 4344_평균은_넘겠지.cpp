#include<iostream>
#include<string>

#define MAX 1000
using namespace std;

int main()
{
	cout.precision(5);
	int i=0, j=0, n=0,
		startindex=0, resultindex=0,
		c, count, ntemp, *nSize;
	double avg,
			**matrix;
	string nstr,subStr;
	
	cin>>c;
	matrix = (double **)calloc(c+1,sizeof(double));
	matrix[c] = (double *)calloc(c,sizeof(double)); //평균 저장
	nSize = (int *)calloc(c,sizeof(int));			//각 케이스별 명수 저장
	getchar();

	for(i = 0; i <c; i++){
		j= startindex = resultindex = 0;
		avg = 0;

		getline(cin,nstr);
		while(true)
		{
			resultindex = nstr.find(' ', startindex);
		
			if(resultindex != -1){
				count = resultindex - startindex;
				subStr = nstr.substr(startindex, count);
		
				if(j == 0){
					ntemp = stoi(subStr);
					if(1<=ntemp && ntemp<= 1000){
						n +=ntemp;
						nSize[i] = ntemp;
						matrix[i] = (double*)calloc(n,sizeof(double));
						j++;
						}
					else
						return -1;
				}
				else{
				matrix[i][j-1] = stoi(subStr);				//cout<<matrix[i][j-1]<<endl;
					if(0<=matrix[i][j-1] && matrix[i][j-1] <= 100){
						avg += matrix[i][j-1];
						j++;
					}
					else
						return -1;
				}
				startindex = ++resultindex;
			}
			else{
				subStr = nstr.substr(startindex);
				matrix[i][j-1] = stoi(subStr);				//cout<<matrix[i][j-1]<<endl;
					if(0<=matrix[i][j-1] && matrix[i][j-1] <= 100){
						avg += matrix[i][j-1];
						j++;
					}
					else
						return -1;
				break;
			}
		}

		matrix[c][i] = avg/nSize[i];
	}
	

	for(i=0; i<c; i++){
		count =0;
		for(j=0; j<nSize[i]; j++){
			if(matrix[c][i]<matrix[i][j])
				count++;
		}
		printf("%.3lf%% \n",(double)count/nSize[i]*100);
	}

	for(i=0; i<c; i++)
	free(matrix[i]);
	free(matrix);

	return 0;
}