#include <iostream>
#include <ctime>
using namespace std;

int main() {

    clock_t begin = clock();
    int varCount = 0;
    bool a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, a1, b1, c1, d1, e1, f1 = 0;

    cout << "How many variables (2, 4, 8, 16, or 32)?" << endl;
    cin >> varCount;

    if(varCount == 2) {
        if ((a && b) == 0) {
            cout << 1 << endl;      // Returns 1 because whole proposition is negated (all values were false [0] therefore returns 1 after negation)
        } else {
            cout << 0 << endl;
        }
    } else if(varCount == 4) {
        if ((a && b && c && d) == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if(varCount == 8) {
        if ((a && b && c && d && e && f && g && h) == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if(varCount == 16) {
        if ((a && b && c && d && e && f && g && h && i && j && k && l && m && n && o && p) == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if(varCount == 32) {
        if ((a && b && c && d && e && f && g && h && i && j && k && l && m && n && o && p && q && r && s && t && u && v && w && x && y && z && a1 && b1 && c1 && d1 && e1 && f1) == 1) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    clock_t end = clock();

	cout << end << endl;
}