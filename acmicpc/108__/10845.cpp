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
    queue<int> qu;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str == "push") {
            int t;
            cin >> t;
            qu.push(t);
        }
        else if(str == "front") {
            if(qu.empty()){
                cout << "-1" << '\n';
            }
            else cout << qu.front() << '\n';
        }
        else if(str == "size"){
            cout << qu.size() << '\n';
        }
        else if(str == "empty"){
            cout << qu.empty() << '\n';
        }
        else if(str == "pop"){
            if(qu.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << qu.front() << '\n';
                qu.pop();
            }
        }
        else if(str == "back"){
            if(qu.empty()){
                cout << "-1" << '\n';
            }
            else cout << qu.back() << '\n';
        }
    }
}
