#include<iostream>
using namespace std; 
int main(){
	int q,c,i,p,n;
	cout<<"enter no.";
	cin>>n;
	p=n*n;
i=0;
q=0;
while(i<=n){
	i++;
c=p%10;
q=q+c;
p=p/10;}
if(n==q)
cout<<"it is a neon no.";
else 
cout<<"it is not a neon no.";
	
	

	return 0;}
