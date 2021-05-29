#include <bits/stdc++.h>
using namespace std;
int minDist(int a[], int n, int x, int y) {
        int mini=INT_MAX,l=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x||a[i]==y){
                if(l!=-1&&a[i]!=a[l]){
                    mini=min(mini,i-l);
                }
                l=i;
            }
        }
        if(mini==INT_MAX)
        return -1;
        else
        return mini;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        cout<<minDist(a, n, x, y) << endl;
    }
    return 0;
}