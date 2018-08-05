#include<bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
    int n, a, b, x, vx, vy;
    cin >> n;
    cin >> a >> b;
    map<ll, ll> tcvs;
    map<pair<int, int>, int> tcps;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x >> vx >> vy;
        ans += tcvs[a * vx - vy] - tcps[{vx, vy}];
        tcvs[a * vx - vy]++;
        tcps[{vx, vy}]++;
    }
    cout << ans * 2 << endl;
}