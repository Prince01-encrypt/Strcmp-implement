#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#define ll long long
 
using namespace std;
 
int main() {
    string p1;
    string p2;
    cin >> p1 >> p2;
    int check;
    int length = p1.size();
    bool found = false;

    for(int i = 0; i < length; i++) {
        p1[i] = tolower(p1[i]);
    }
    for(int i = 0; i < length; i++) {
        p2[i] = tolower(p2[i]);
    }
    for(int i = 0; i < length; i++) {
        if(p1[i] - p2[i] > 0) {
            found = true;
            cout << "1";
            break;
        }
        else if(p1[i] - p2[i] < 0) {
            found = true;
            cout << "-1";
            break;
        }
    }
    if(!found)  cout << "0";

    return 0;
}
