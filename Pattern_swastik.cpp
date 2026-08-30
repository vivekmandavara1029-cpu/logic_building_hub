#include<iostream>
using namespace std;
int main (){
int n ,i,j;
cout<<"enter no.";
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<n;j++){
	if((j==(n+1)/2)||(i==(n+1)/2)||((j>n/2)&&(i==1))||((j<=n/2)&&(i==n))||((i<=n/2)&&(j==1)))
	cout<<"*";
	else
cout<<" ";}
if(n%2!=0){
if(((j==n)&&(i>n/2))||((j==n)&&(i==1)))
cout<<"*"<<endl;
else
cout<<" "<<endl;}
if(n%2==0){
if(((j==n)&&(i>=n/2))||((j==n)&&(i==1)))
cout<<"*"<<endl;
else
cout<<" "<<endl;}
}
return 0;}
