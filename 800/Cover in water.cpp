#include<bits/stdc++.h>
using namespace std;
int coverWater(string str, int len) {
    int ans = 0;
    int count = 0;
    for(int i=0;i<len;i++) {
        if(str[i] == '.') {
            count++;
            ans++;
        }
        if(str[i] =='#') {
            if(count >=3) return 2;
            else {
                count = 0;
            }
        }

    }
    if(count >= 3) return 2;
    return ans;

}
int main() {
    int t;
    cin >> t; // Number of test cases

    while(t--) {
        int len;
        cin >> len;
        string str;
        cin >> str;

        int ans = coverWater(str,len);
        cout<<ans<<endl;

    }
    return 0;
}
