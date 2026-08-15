#include<iostream>
using namespace std; 
int main(){
	int i,p,n;
	cout<<"enter the value of n = ";
	cin>>n;
	p=0;
	for(i=1;i<n;i++){
	if(n%i==0)
	p=p+i;}
	if(p==n)
		cout<<" it is a perfect no.";
		else
		cout<<"it is not a perfect no.";
	
	
	return 0;}
	
