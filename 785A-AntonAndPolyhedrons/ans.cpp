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

    map<string, int> faces;

    faces["Tetrahedron"] =  4;
    faces["Cube"] = 6;
    faces["Octahedron"] = 8;
    faces["Dodecahedron"] = 12;
    faces["Icosahedron"] = 20;

    int t;
    cin >> t;
    int ans = 0;
    while(t--) {
        string s;

        cin >> s;

        ans += faces[s];
    }
    cout << ans << endl;
    return 0;
}
    
