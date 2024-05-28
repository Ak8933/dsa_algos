#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int t,int n, int i){
    if(i==n)return 0;
    int inc = (t+1)*a[i] + solve(a,t+1,n,i+1);
    int exc = solve(a,t,n,i+1);
    return max(inc,exc);
}
 
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //-1 -5 0 5 -9
    sort(a,a+n);
    int ans = solve(a,0,n,0);
    cout<<ans<<endl;
return 0;
}