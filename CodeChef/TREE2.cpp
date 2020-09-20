#include <bits/stdc++.h>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n];
        for(long int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long int temp;
        long int count = 0;
        for(long int i = 0;i<n;i++){
            if(a[i]!=0 && a[i]!=temp){
                count++;
                temp = a[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
