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

    int arr[5][5];
    int x , y;
    for(int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            
            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << (abs(3 - x) + abs(3 - y))<<'\n';

    return 0;
}
    
