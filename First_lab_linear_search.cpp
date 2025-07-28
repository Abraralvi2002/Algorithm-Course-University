#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i = 0;i<n;i++){
            cin>>ar[i];
    }
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    int p = -1;
    for(int i = 0;i<n;i++){
        if(ar[i] == target){
            p = i + 1;
            break;
        }
    }
    if(p == -1){
        cout<<"Target not found"<<endl;
    }else{
        cout<<"Target found at position: "<<p<<endl;
    }
    return 0;
}