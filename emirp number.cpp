#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int n,copy,copy2,sum,flag=1,flag1=1,ld,l,i,a;
	cout<<"enter the value of n = ";
	cin>>n;
	copy=n;
	copy2=n;
	copy=copy/10;
	l=1;
	while(copy>0){
	l=l*10;
	copy=copy/10;}
	while(copy2>0){
	ld=copy2%10;
	sum=ld*l+sum;
	l=l/10;
	copy2=copy2/10;}
	for(a=2;((a<=sqrt(n))&&(flag==1));a++){
	if(n%a==0)
	flag=0;}
	for(i=2;((i<=sqrt(sum))&&(flag1==1));i++){
	if(n%i==0)
	flag1=0;}
	if((flag==1)&&(flag1==1))
	cout<<"n and reverse of n both are prime";
	else
	cout<<"not a prime";
	return 0;}
	
