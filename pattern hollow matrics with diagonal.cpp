#include<iostream>
using namespace std;
int main (){
int n ,i,j;
cout<<"enter no.";
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<n;j++){
	if((i==1)||(i==n)||(j==1)||(j==n))
	cout<<"*";
	else if((i==j)&&(i+j==n+1))
	cout<<"@";
	else if((j==i)||(i+j==n+1))
	cout<<"*";
	else
cout<<" ";}
cout<<"*"<<endl;
}
return 0;}
