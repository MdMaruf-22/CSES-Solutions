#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        if(sum+1<arr[i]) break;
        sum+=arr[i];
    }
    cout<<sum+1<<endl;
}