#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int s1,s2,s3,s4,win1,win2,loss1,loss2;
    cin >> s1 >> s2 >> s3 >> s4;
    win1 = max(s1,s2);
    loss1 = min(s1,s2);

    win2 = max(s3,s4);
    loss2 = min(s3,s4);

    if( loss1 <= win2 && loss2 <= win1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}
}
