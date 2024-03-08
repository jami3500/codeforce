#include<bits/stdc++.h>
using namespace std;
int main(){

int n, m;
cin >> n >> m;
int flag = 0;
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
char color;
cin >> color;
        if(color == 'C' || color == 'M' || color == 'Y'){
            flag = 1;
            break;
        }
    }

}
    if(flag == 1){
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }
}


