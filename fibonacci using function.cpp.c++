#include <iostream>
using namespace std;
void fib(int n){
int n1=0,n2=1,nt;
for(int i =0;i<n;i++)
{
cout<<n1<<"\n";
nt=n1+n2;
n1=n2;
n2=nt;
}
int main()
{
int n;
cin>>n;


fib();
return 0;
}
