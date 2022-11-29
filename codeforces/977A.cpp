#include <iostream>
using namespace std;
int main()
{
int a,j;
cin>>a>>j;
 
 
for(int i=j;i>0;i--){
    if(a%10==0)
{
    a=a/10;
    
}
else{
   a=a-1;
}
 
}
cout<<a;
 
    return 0;
}