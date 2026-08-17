#include<iostream>
using namespace std;
int main (){
int n,c,sum;
cout<<"enter the vale of n = ";
cin>>n;
 while((n!=1)&&(n!=4)){
 	sum=0;
 while(n>0){
 c=n%10;
 sum=(c*c)+sum;
 n=n/10;}
 n=sum;
 }
 if(n==1)
 cout<<"it is a happy no.";
 else
 cout<<"it is a sad no.";
 return 0;}
