#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) {
    if(a >= b) return a;
    return b;
}

int findMinimumFuel(vector<int> &a, int n, int x) {
    int ans = a[0];

    for(int i=1;i<n;i++) {
        
        ans = max(ans, a[i] - a[i-1]);
        
    }
    ans = max(ans,2*(x - a[n-1]));
    return ans;

}
int main() {
    int t;
    cin >> t; // Number of test cases

    while(t--) {
        int n,x;
        cin >> n >> x;

        vector<int> a(n);

        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        int ans = findMinimumFuel(a,n,x);
        cout<<ans<<endl;

    }
    return 0;
}
