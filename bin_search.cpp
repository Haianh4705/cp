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
        if (cmp(m)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l; // tra ve r (gia tri cuoi cung + 1) neu bai toan vo nghiem
}

int main() {
    return 0;
}
