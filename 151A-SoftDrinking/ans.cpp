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

    int friends, bottles, lts, limes, slices, salt, nl, np;

    cin >> friends >> bottles >> lts >> limes >> slices >> salt >> nl >> np;

    int drinks = bottles * lts / (friends * nl);
    int lime_slices = limes * slices / friends;
    int salt_each = salt / (friends * np);

    cout << min(min(drinks, lime_slices), salt_each);



    return 0;
}
    
