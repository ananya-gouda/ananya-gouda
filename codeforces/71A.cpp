
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string name;
    for(int i=0; i<n;i++){
        cin>>name;
        int s= name.length();
        if(s>10){
            cout<<name[0]<<s-2<<name[s-1]<<endl;;
        }
        else{
            cout<<name<<endl;
        }
    }
    return 0;
}