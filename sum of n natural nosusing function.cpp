#include<iostream>
using namespace std;
int sumNaturaln(int n){
int sum=0;
for(int i=1;i<=n;i++){
sum+=i;
}
cout<<sum;
return sum;
}
int main(){
int n;
cin>>n;
sumNaturaln(n);
return 0;
}
