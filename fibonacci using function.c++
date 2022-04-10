#include <iostream>
using namespace std;
void fib(int n){
int n1=0,n2=1,nt=0;
for(int i=0;i<n;i++)
{
//cout<<n1<<"\n";
nt=n1+n2;
n1=n2;

n2=nt;
cout<<n1<<"\n";
}
return;

}
int main()
{
int n3;
cin>>n3;


fib(n3);
return 0;
}

