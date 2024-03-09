#include<bits/stdc++.h>
using namespace std;
int main(){

int t,h,m,day_24,total_time,wait_minute;
cin >> t;
while(t--){
    cin >> h >> m;

    day_24 = 24*60;
    total_time = h*60+m;
    wait_minute = day_24 - total_time;


    cout << wait_minute << endl;

}



}
