#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1), pos(n + 1);

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        arr[i] = x;
        pos[x] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; ++i) {
        if (pos[i] < pos[i - 1]) ++rounds;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        a = arr[a];
        b = arr[b];

        // Para cada troca, só os pares (a-1,a), (a,a+1), (b-1,b), (b,b+1) podem ser afetados
        set<pair<int, int>> affected;
        for (int d = -1; d <= 1; ++d) {
            if (1 <= a + d && a + d <= n) affected.insert({a + d - 1, a + d});
            if (1 <= b + d && b + d <= n) affected.insert({b + d - 1, b + d});
        }

        // Remove as rodadas antigas
        for (auto [x, y] : affected) {
            if (x >= 1 && y >= 1 && x < y && pos[y] < pos[x]) --rounds;
        }

        swap(pos[a], pos[b]);
        swap(arr[pos[a]], arr[pos[b]]);

        // Adiciona as rodadas novas
        for (auto [x, y] : affected) {
            if (x >= 1 && y >= 1 && x < y && pos[y] < pos[x]) ++rounds;
        }

        cout << rounds << "\n";
    }
    return 0;
}