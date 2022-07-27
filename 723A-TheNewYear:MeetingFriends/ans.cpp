#include<bits/stdc++.h>
using namespace std;

void init() {
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
}

int main() {
    init();

    int x1, x2, x3;

    cin >> x1 >> x2 >> x3;

    int mini = min(min(x1, x2), x3);
    int maxi = max(max(x1, x2), x3);

    int mid = (x1 + x2 + x3) - mini - maxi; 

    cout << (abs(x1 - mid) + abs(x2 - mid) + abs(x3 - mid)) << '\n';

    return 0;
}
    
