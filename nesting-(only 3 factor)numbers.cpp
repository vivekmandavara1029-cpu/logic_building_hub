#include<iostream>
#include<cmath>
using namespace std;
int main (){
int up,lr,i,a,count;
cout<<"enter the lower range = ";
cin>>lr;
cout<<"enter the upper range = ";
cin>>up;
if(lr>up)
cout<<"invalid error";
for(i=lr;i<=up;i++){
	count=0;
		for(a=2;a<=i/2;a++){
		if(i%a==0)
		count=count+1;}
		if(count==1)
		cout<<i<<endl;}
		return 0;}
