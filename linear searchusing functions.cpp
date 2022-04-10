#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k){
for(int i=0;i<n;i++){
if(arr[i]==k)
cout<<"element is at "<<i<<" position"<<endl;

}
cout<<"not present";
return 0;
}

int main()
{
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
linearSearch(arr,n,k);
return 0;
}
