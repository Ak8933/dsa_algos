// count prime problem of leetcode

#include<bits/stdc++.h>
using namespace std;

int countprimes(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;

            for(int j=i*i; j<n; j=j+i){
                prime[j]=0;
            }
        }
    }
    return cnt;
}

int main(){
    int k=countprimes(9);
    cout<<k;

}