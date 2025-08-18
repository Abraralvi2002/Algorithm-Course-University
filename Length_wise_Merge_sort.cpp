#include<bits/stdc++.h>
using namespace std;

void Merge(vector<string> &v,int p,int q,int r){
    int n1 = q-p + 1, n2 = r - q;
    vector<string> L(n1+1);
    vector<string> R(n2+1);
    int i,j,k;
    for(i = 0;i<n1;i++){
        L[i] = v[p+i];
    }
    for(j = 0;j<n2;j++){
        R[j] = v[q+1+j];
    }

    L[n1] = string(10000,'~');
    R[n2] = string(10000,'~');

    i = 0, j = 0;

    for(k = p;k<=r;k++){
        string ll = L[i];
        string rr = R[j];
        if(ll.size() < rr.size()){
            v[k] = L[i];
            i++;
        }else if(ll.size() == rr.size()){
            if(L[i] <= R[j]){
                v[k] = L[i];
                i++;
            }else{
                v[k] = R[j];
                j++;
            }
        }else{
            v[k] = R[j];
            j++;
        }
    }
    return;

}

void M_sort(vector<string> &v,int p,int r){
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
    vector<string> v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    M_sort(v,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}