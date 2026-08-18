#include<iostream>
#include<cmath>
using namespace std;
int main (){
int n,ld,l,z,sum=0,copy,copy2;
cout<<"enter no.";
cin>>n;
copy=n;
copy2=n;
l=1;
n=n/10;
while(n>0){
l=l+1;
n=n/10;}
while(copy>0){
ld=copy%10;
z=pow(ld,l);
sum=z+sum;
copy=copy/10;}
if(sum==copy2)
cout<<"armstrong no.";
else
cout<<"not a armstrong no.";

return 0;}
