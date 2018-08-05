#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n,q,c,x,pos;
    long long mas[200002], sum[200002];
    cin >> n >> q;
    c=0;
    for (int i = 1; i <= n; i++) {
        cin >> mas[i];
        sum[i] = sum[i - 1] + mas[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> x;
        c += x;
        pos = upper_bound(sum + 1, sum + 1 + n, c) - sum - 1;
        if (pos >= n) {
            cout << n << endl;
            c = 0;
        } else {
            cout << n - pos << endl;
        }
    }
}