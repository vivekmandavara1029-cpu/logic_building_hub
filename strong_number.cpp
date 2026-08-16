#include<iostream>
using namespace std;
int main (){
int n,c,fac,sum=0,copy;
cout<<"enter the value of n = ";
cin>>n;
copy=n;
while(n>0){
c=n%10;
fac=1;
while(c>0){
fac=fac*c;
c--;}
sum=sum+fac;
n=n/10;}
if(sum==copy)
cout<<" it is a strong no.";
else
cout<<"it is not a strong no.";
return 0;}

