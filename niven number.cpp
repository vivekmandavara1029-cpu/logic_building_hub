#include<iostream>
using namespace std; 
int main(){
	int q,c,i,p,n;
	cout<<"enter no.";
	cin>>n;
i=0;
q=0;
while(i<=n){
	i++;
c=n%10;
q=q+c;
n=n/10;}
if(n%q==0)
cout<<"it is a harshad no.";
else 
cout<<"it is not a harshad no.";
	return 0;}
