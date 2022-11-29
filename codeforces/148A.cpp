#include  <iostream>
using namespace std;
int main(){
 
    int k,l,m,n,d,counter=0;
    cin>>k>>l>>m>>n>>d;
    int arr[d];
 
 
 
   
   if(d>0){
    for(int i=0;i<d;i++){
        arr[i]=i+1;
    
 
 
 
         if(arr[i]%k!=0 && arr[i]%l!=0 && arr[i]%m!=0 && arr[i]%n!=0){
            counter++;
            
         }
         }
   }
 
    cout<<d-counter;
 
 
    return 0;}