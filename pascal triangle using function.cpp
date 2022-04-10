#include <iostream>

using namespace std;
int fact(int n)
{
    int f=1;

    for(int i=1;i<=n;i++){
    f=f*i;
    }
    return f;
}
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
cout<<(fact(i)/(fact(j)*fact(i-j)));
    }
    cout<<endl;
    }


    return 0;
}
