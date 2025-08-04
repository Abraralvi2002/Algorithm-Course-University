#include<bits/stdc++.h>
using namespace std;
int binary_search(int ar[], int n, int val){
    int first = 0;
    int last = n - 1;
    while(first <= last){
        int mid = (first + last) / 2;
        
        if(ar[mid] == val){
            return mid;
        }else if(ar[mid] < val){
            first = mid + 1;
        }else{
            last = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int val;
    cin>>val;
    int target = binary_search(ar,n,val);
    if(target == -1){
        cout<<"Target not found";
    }else{
        cout<<"Target found at: "<<target + 1<<endl;
    }

    return 0;
}