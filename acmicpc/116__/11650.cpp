#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
#include <map>
#include <set>
#include <math.h>
#include <numeric>
#include <cassert>
#include <stack>
#include <cstring>
#include <climits>
#include <utility>
typedef long long ll;
typedef unsigned long ull;

#define interface struct
#define zx3f 1061109567

typedef signed char i8;
typedef short i16;
typedef int i32;
typedef long long i64;

using namespace std;

struct Pos
{
    int x;
    int y;
};

int main()
{
    pair<int, int> p[100001];
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n, [](pair<int, int> a, pair<int, int> b)
         {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first; });
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << " " << p[i].second << '\n';
    }
}
