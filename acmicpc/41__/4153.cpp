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
    while(1){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) return 0;
        int m = max(a, max(b,c));
        int min1 = min(a, min(b,c));
        for(int i=0; i<3; i++){
            if(m == a) a = 0;
            if(m == b) b = 0;
            if(m == c) c = 0;
            if(min1 == a) a = 0;
            if(min1 == b) b = 0;
            if(min1 == c) c = 0;
        }
        if(m*m == (min1*min1) + (max(a, max(b, c))*max(a, max(b, c)))) cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }
}
