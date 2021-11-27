#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    vl dist(N - 1);
    for (int i = 0; i < N - 1; ++i)
    {
        cin >> dist[i];
    }

    ll sumCost{ 0 };

    ll nowCost;
    cin >> nowCost;

    int i{ 0 };
    sumCost += dist[i] * nowCost;
    ++i;

    for (int j = 0; j < N - 2; ++j)
    {
        ll cost;
        cin >> cost;

        if (cost < nowCost) {
            nowCost = cost;
        }

        sumCost += dist[i] * nowCost;
        ++i;
    }

    cout << sumCost;

    return 0;
}