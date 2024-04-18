#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

int main() {
    int y;
    vector<int> u{ 5, 6, 9, 8, 78 }, o;
    cin >> y;
    o = VecP(u, y);
    for (int t : o) {
        cout << t << ' ';
    }
    return 0;
}
