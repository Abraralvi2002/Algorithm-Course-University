#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &v,int p,int q,int r){
    int n1 = q-p + 1, n2 = r - q;
    vector<int> L(n1+1);
    vector<int> R(n2+1);
    int i,j,k;
    for(i = 0;i<n1;i++){
        L[i] = v[p+i];
    }
    for(j = 0;j<n2;j++){
        R[j] = v[q+1+j];
    }

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    i = 0, j = 0;

    for(k = p;k<=r;k++){
        if(L[i] <= R[j]){
            v[k] = L[i];
            i++;
        }else{
            v[k] = R[j];
            j++;
        }
    }
    return;

}

void M_sort(vector<int> &v,int p,int r){
    if(p<r){
        int q = (p+r) / 2;
        M_sort(v,p,q);
        M_sort(v,q+1,r);
        Merge(v,p,q,r);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    M_sort(v,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}