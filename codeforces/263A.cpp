
#include<iostream>
using namespace std;
int main(){
    int a[5][5],row,col;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    int x=2-row;
    int y=2-col;
    cout<<abs(x)+abs(y)<<endl;
 
    return 0;
}