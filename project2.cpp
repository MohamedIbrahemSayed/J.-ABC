#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<queue>
#include<iomanip>
#include<map>
#include<stack>
#include<bitset>
#include <cstring>
#include<cassert>
using namespace std;
#define ll long long
#define z0  return 0;
#define X x.size()
#define mod 1000000007
#define pb push_back
#define se 10000000
void fast() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int main() {
    fast();
    freopen("abc.in", "r", stdin);
    int a = 0, b = 0, c = 0, n, ans = 1e9, cnt = 0;
    string s; cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'b')b++;
        else if (s[i] == 'c')c++;
        else a++;
    }
    if (c == n || b == n || a == n) {
        cout << 0; z0
    }
    if (!c || !a) { cout << 0; z0 }
    if (!b) { cout << -1; z0 }
    string copy = s;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < n; i++) {
        if (s[i] != copy[i])cnt++;
    }
    ans = min(ans, int(ceil(cnt * 1.0 / 2)));
    cnt = 0;
    sort(copy.rbegin(), copy.rend());
    for (int i = 0; i < n; i++) {
        if (s[i] != copy[i])cnt++;
    }
    ans = min(ans, int(ceil(cnt * 1.0 / 2)));
    cout << ans;
}