#include<bits/stdc++.h>

using namespace std;

int main() {
    long long flag, sum, res;
    long long mas[15],masrs[15];
    flag = 0;
    sum = 0;
    res = 0;
    for (int i = 0; i < 14; i++) {
        cin >> mas[i];
    }
    for (int i = 0; i < 14; i++) {
        if (mas[i] > 0) {
            sum = 0;
            for (int j = 0; j < 14; j++) {
                masrs[j] = mas[j];
            }
            masrs[i] = 0;
            for (int j = 0; j < 14; j++) {
                masrs[j] += mas[i] / 14;
            }
            for (int j = 1; j <= mas[i] % 14; j++) {
                masrs[(i + j) % 14]++;
            }
            for (int j = 0; j < 14; j++) {
                if (masrs[j] % 2 == 0) sum += masrs[j];
            }
            res = max(res, sum);
        }

    }
    cout << res << endl;
}