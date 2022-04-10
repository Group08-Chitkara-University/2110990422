#include <iostream>
using namespace std;
int main()
{
int n1=0,n2=1,nt,n;
cin>>n;
for(int i =0;i<n;i++)
{
cout<<n1<<"\n";
nt=n1+n2;
n1=n2;
n2=nt;

}
return 0;
}
