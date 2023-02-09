#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)
#define lld long long int
#define arr(name, n) int *name = (int *)malloc(n * sizeof(int));
#define mod 1e9 + 7
#define flash                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

lld gcd(lld a, lld b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

void generate(vector<int> &ans, int i, int n, vector<int> real)
{
    if (i >= n)
    {
        cout << "[";
        for (auto &a : ans)
        {
            cout << a << ", ";
        }
        cout << "\b\b]" << endl;
        return;
    }
    ans.push_back(real[i]);
    generate(ans, i + 1, n, real);
    ans.pop_back();

    generate(ans, i + 1, n, real);
}

int main(int args, char *argc[])
{
    // CODE HERE
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> a;
    generate(a, 0, v.size(), v);
    return 0;
};