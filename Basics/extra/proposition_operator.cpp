// Two Variable Proposition Operations

#include <iostream>
using namespace std;

// Functions
bool conj(bool p, bool q);
bool disj(bool p, bool q);
bool imp(bool p, bool q);
bool bi(bool p, bool q);

int main() {

    bool p = 0;
    bool q = 0;
    int t = 0;
    int v = 0;
    bool r = 0;

    cout << "This program tests out a simple two variable proposition" << endl;
    cout << "Select (1 = conjunction // 2 = Disjunction // 3 = Implication // 4 = Biconditional" << endl;
    cin >> t;

    cout << "Enter p value (0 = F, 1 = T)" << endl;
    cin >> p;

    cout << "Enter q value (0 = F, 1 = T)" << endl;
    cin >> q;

    if(t == 1) {
        r = conj(p,q);
    } else if (t == 2) {
        r = disj(p,q);
    } else if (t == 3) {
        r = imp(p,q);
    } else if (t == 4) {
        r = bi(p,q);
    }

    cout << endl << "The final result is: " << r << endl;


}

// Conjunction
bool conj(bool p, bool q) {
    
    if((p == 1 && q == 1)) {
        return 1;
    } else {
        return 0;
    }

}

// Disjunction
bool disj(bool p, bool q) {
    if((p == 1 && q == 0) || (p == 0 && q == 1)) {
        return 1;
    } else {
        return 0;
    }
}

// Implication
bool imp(bool p, bool q) {

    if((p == 1 && q == 1) || (p == 0 && q == 1) || (p == 0 && q == 0)) {
        return 1;
    } else {
        return 0;
    }

}

// Biconditional
bool bi(bool p, bool q) {
    if((p == 1 && q == 1) || (p == 0 && q == 0)) {
        return 1;
    } else {
        return 0;
    }
}

