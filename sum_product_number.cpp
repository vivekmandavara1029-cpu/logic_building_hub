#include<iostream>
using namespace std; 
int main(){
	int sum=0,product=1,ld,num;
	cout<<"enter no.";
	cin>>num;
	while(num>0){
	ld=num%10;
	product=product*ld;
	sum=sum+ld;
	num=num/10;}

	if(product==sum)
	cout<<"it is a sumproduct no.";
	else
	cout<<" it is not a sumproduct no.";
	return 0;}
