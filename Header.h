#pragma once
#include <vector>
#include <iostream>
using namespace std;

vector<int> VecP(vector<int> n, int j) {
    int y = n.size();
    for (int u = 0; u < y; ++u) {
        n[u] += j;
    }
    return n;
}
