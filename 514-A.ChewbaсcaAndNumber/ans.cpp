#include<bits/stdc++.h>
using namespace std;

void init() {
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
}

char invert(char c, int isFirst) {
    int d = c - 48;
    char e;
    if (isFirst == 1 && d == 9) {
        e = c;
    } else {
        if (9 - d < d) {
            e = (char) (9 - d + 48);
        } else {
            e = c;
        }
    }
    return e;
}

string a;
int main() {
    init();
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (i == 0) {
            a[i] = invert(a[i], 1);
        } else {
            a[i] = invert(a[i], 0);
        }
    }
    cout << a << endl;
    return 0;
}
    
