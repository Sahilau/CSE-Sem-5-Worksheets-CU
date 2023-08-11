#include<bits/stdc++.h> 
using namespace std; 
int gcd(int x,int y)
{
if(y==0) 
return x;
else
return gcd(y,x%y);
}
int main()
{
int a,b;
cout<<"Enter First Number: ";
cin>>a;
cout<<"Enter Second Number: ";
cin>>b;
cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b); return 0;
}
