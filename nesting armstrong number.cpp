#include<iostream>
#include<cmath>
using namespace std;
int main (){
int up,lr,l,i,dig,copy2,z,sum,copy;
cout<<"enter the lower range = ";
cin>>lr;
cout<<"enter the upper range = ";
cin>>up;
if(lr>up)
cout<<"invalid error";
for(i=lr;i<=up;i++){
	copy=i;
	copy2=i;
	sum=0;
	l=1;
	copy=copy/10;
	
	while(copy>0){
	l=l+1;
	copy=copy/10;}
	
	while(copy2>0){
	dig=copy2%10;
	z=pow(dig,l);
	sum=sum+z;
    copy2=copy2/10;}

if(i==sum)
cout<<i<<endl;}
return 0;}

