#include<bits/stdc++.h>
using namespace std;
int main(){

int t;                        //using test case variable
cin >> t;
while(t--){                   // using loop
    int n;                    // string length
    cin >> n;
    string s, t = "Timur";    // fixed name
    cin >> s;
    sort(s.begin(), s.end()); // sort input string value
    sort(t.begin(), t.end()); //sort fixed main string

    if(s == t){                // compare fixed and input string
        cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }

}
}
