#include<iostream>
using namespace std;
bool pythagoriantriplet( int a,int b,int c){
int maxi=max(a,max(b,c));
int x,y;
if(maxi==a){
x=b;
y=c;
}
else if(maxi==b){
x=a;
y=b;
}
else{
x=a;
y=b;
}
if(maxi*maxi==x*x+y*y){
return true;
}
else{
return false;
}


}
int main()
{
int a,b,c;
cin>>a>>b>>c;
pythagoriantriplet(a,b,c);
if(pythagoriantriplet(a,b,c))
cout<<"IT IS A PYT"<<endl;
else
cout<<"NOT A PYT"<<endl;
return 0;
}
