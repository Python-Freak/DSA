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

// BACK-TRACKING
void generate(string s, int o, int c)
{
    // IF NUMBER OF OPENING AND CLOSING BRACKETS (LEFT) IS ZERO THEN IT IS A VALID STRING
    if (o == 0 && c == 0)
    {
        cout << s << endl;
    }
    // IF YOU CAN PUT A OPENING BRACKET PUT IT
    if (o > 0)
    {
        s.push_back('(');
        generate(s, o - 1, c);
        // REVERT BACK
        s.pop_back();
    }
    // IF YOU CAN PUT A CLOSING BRACKET PUT IT
    if (c > 0 && c > o)
    {
        s.push_back(')');
        generate(s, o, c - 1);
        // REVERT BACK
        s.pop_back();
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n = 4;
    generate("", n, n);
    return 0;
};