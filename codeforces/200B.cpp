#include  <iostream>
using namespace std;
int main(){
 
    int n;
    float sum=0;
    cin>>n;
    int arr[n];
    if(n>0){
        for(int i =0;i<n;i++){
 
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        sum= sum+arr[i];
    }
   
    
     cout<<sum/n;
 
    }
 
    return 0;
}