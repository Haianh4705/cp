#include <bits/stdc++.h>
using namespace std;

// nen chon cmp sao cho -> ...F F F T T T...
bool cmp() {
    // ...
    return true;
}

// l: gia tri dau tien, r: gia tri cuoi cung + 1
int bin_search(int l, int r) {
    while (l < r) {
        int m = l + (r-l)/2;
        // truyen m vao cmp
        if (cmp()) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l; // tra ve r (gia tri cuoi cung + 1) neu bai toan vo nghiem
}

// doi voi so thuc
double bin_search(double l, double r) {
    double e = 1e-8; // co the dung for 0 -> 100 neu de bai khong cho thoi gian chat
    while (abs(l-r) >= e) {
        double m = l + (r-l)/2;
        // truyen m vao cmp
        if (cmp()) {
            r = m;
        } else {
            l = m;
        }
    }
    return l + (r-l)/2;
}

int main() {
    return 0;
}
