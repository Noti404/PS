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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            cin >> b;
            s.push(b);
        }
        if (a == 2)
        {
            if (!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            else
                cout << "-1" << '\n';
        }
        if (a == 3)
            cout << s.size() << '\n';
        if (a == 4)
            cout << s.empty() << '\n';
        if (a == 5)
        {
            if (s.empty())
                cout << "-1" << '\n';
            else
                cout << s.top() << '\n';
        }
    }
}
