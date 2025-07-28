#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
            cin>>ar[i];
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += ar[i];
    }
    int max_num = INT_MIN;
    for(int i = 0;i<n;i++){
        if(ar[i] > max_num){
            max_num = ar[i];
        }
    }
    cout<<"The summation of array : "<<sum<<endl<<"The maximum number is: "<<max_num<<endl;
    return 0;
}