#include<iostream>
using namespace std;
#define rows 3
#define columns 2

int main(){
	int numbers [rows][columns];
	cout<<"enter numbers:"<<endl;

int i ,j;
for (i=0;i<3;i++);{
	for(j=0;j<2;j++);{
	cin>>numbers[i][j];
}
	cout<<endl;
	}
return 0;
}