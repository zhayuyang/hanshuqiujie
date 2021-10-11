#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<queue>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
using namespace std;
int n;
int gcd(int x,int y){
	if(x==1)return y;
	else return gcd(y,x%y);
}
void prt_1(){
	int x_1,x_2,y_1,y_2;
	cin>>x_1>>y_1>>x_2>>y_2;
	if(x_1==x_2){
		cout<<"Input Error!"<<endl;
		return;
	}
	int x_c=abs(x_1-x_2);
	int y_c=abs(y_1-y_2);
	cout<<"y=";
	if((y_1>y_2&&x_1>x_2)||(y_1<y_2&&x_1<x_2))cout<<'('<<y_c/gcd(x_c,y_c)<<'/'<<x_c/gcd(x_c,y_c)<<')';
	else if((y_1<y_2&&x_1>x_2)||(y_1>y_2&&x_1<x_2))cout<<'-('<<y_c/gcd(x_c,y_c)<<'/'<<x_c/gcd(x_c,y_c)<<')';
	cout<<'x';
	int m=y_c/gcd(x_c,y_c);
	int n=x_c/gcd(x_c,y_c);
	int b=abs(n*y_1-x_1*m);
	if(((n*y_1>x_1*m)&&(n>0))||((n*y_1<x_1*m)&&(n<0)))cout<<"+("<<b<<'/'<<abs(n)<<')';
	else if(((n*y_1<x_1*m)&&(n>0))||((n*y_1>x_1*m)&&(n<0)))cout<<"-("<<b<<'/'<<abs(n)<<')';
}
void prt_2(){
	
}
void prt_more(int n){
	int x[100],y[100];
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
}
int main(){
	while(cin>>n){
		if(n==1)prt_1();
		else if(n==2)prt_2();
		else if(n>=3)prt_more(n);
		
	}
	return 0;
}

