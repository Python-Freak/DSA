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

lld binaryExponentation(lld a, lld b)
{
    if (b == 0)
    {
        return 1;
    }
    lld res = binaryExponentation(a, b / 2);
    if (b & 1)
    {
        return 1LL * a * res * res;
    }
    else
    {
        return 1LL * res * res;
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    cout << pow(2, 13) << endl;
    cout << binaryExponentation(2, 13) << endl;
    return 0;
};