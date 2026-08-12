#include<iostream>
using namespace std;
int main (){
	int i,third,first,second,n;
	cout<<"enter the value of n,where the fibonocci series is printed n times = ";
	cin>>n;
 third=0;
	first=0;
	second=1;
	for(i=1;i<=n;i++){
	cout<<first<<endl;
	third=first+second;
	first=second;
	second=third;}
	return 0;}
