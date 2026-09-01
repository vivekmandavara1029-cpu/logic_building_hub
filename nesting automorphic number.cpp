#include<iostream>
#include<cmath>
using namespace std;
int main (){
int up,lr,l,i,ld,sq,copy;
cout<<"enter the lower range = ";
cin>>lr;
cout<<"enter the upper range = ";
cin>>up;
if(lr>up)
cout<<"invalid error";
for(i=lr;i<=up;i++){
	sq=i*i;
copy=sq;
copy=copy/10;
l=1;
while(copy>0){
l=l*10;
copy=copy/10;}

while(sq>0){
ld=sq%l;
if(ld==i)
cout<<i<<endl;
sq=0;}
}
return 0;}
