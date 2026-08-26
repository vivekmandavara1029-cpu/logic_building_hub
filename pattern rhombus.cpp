#include<iostream>
using namespace std;
int main (){
int n,i,j,v;
cout<<"enter no.";
cin>>n;
v=(2*n-3);
for(i=1;i<=n;i++){
for(j=1;j<=(n-i);j++){
	 cout<<" ";}
	 for(j=1;j<=(2*i-1);j++){
	cout<<"*";}
	cout<<endl;}
for(i=2;i<=n;i++){
for(j=1;j<=(i-1);j++){
	 cout<<" ";}
	 for(j=v;j>0;j--){
	cout<<"*";}
v=v-2;
	cout<<endl;}
	return 0;}
	
