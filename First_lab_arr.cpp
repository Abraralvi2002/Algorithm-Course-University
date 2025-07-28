#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    cout<<"Enter Your elements"<<endl;
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Elements Are: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}