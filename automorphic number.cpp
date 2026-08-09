#include<iostream>
using namespace std;
int main (){
int copy,l=1,sq,num;
cout<<"enter no.";
cin>>num;
sq=num*num;
copy=sq;
copy=copy/10;
while(copy>0){
l=l*10;
copy=copy/10;}
while(sq>0){
sq=sq%l;
if(sq==num)
cout<<"automorphic no.";
else
cout<<"not an automorphic no.";
sq=sq/l*10;}
return 0;}

