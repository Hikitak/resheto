#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    n++;
    int *a= new int[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    for(int j=2;j<n;j++){
        if(a[j]){
            cout<<a[j]<<endl;
            for(int k=j*j;k<n;k+=j)
                a[k]=0;
        }

    }
}

