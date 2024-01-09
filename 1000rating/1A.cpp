#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll m, n, a;
    cin >> m >> n >> a;

    ll ans = ceil(1.0 * m / a) * ceil(1.0 * n / a);

    cout << ans << endl;

    return 0;
}
