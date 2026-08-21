#include<iostream>
#include<cmath>
using namespace std;
int main (){
float y=1,x,z,num,sum=1;
int i;
	cout<<"enter the value of num  = ";
	cin>>num;
	cout<<"enter the value of x (where x is representing a base number) = ";
	cin>>x;
	for(i=2;i<=num;i++){
	z=pow(x,i);
	if(i%2==0)
	sum=sum+z/i;
	else
	sum=sum-z/i;}
	cout<<sum;
	return 0;}
	
	
	
	
	
