#include<iostream>
#include<cmath>
using namespace std;
int main (){
int up,lr,i,dig,fac,sum,copy;
cout<<"enter the lower range = ";
cin>>lr;
cout<<"enter the upper range = ";
cin>>up;
if(lr>up)
cout<<"invalid error";

for(i=lr;i<=up;i++){
	copy=i;
	sum=0;
	
	while(copy>0){
	fac=1;
	dig=copy%10;
	
	while(dig>0){
	fac=fac*dig;
	dig--;}
	
	sum=sum+fac;
	copy=copy/10;}
	if(i==sum)
	cout<<i<<endl;}
	return 0;}
