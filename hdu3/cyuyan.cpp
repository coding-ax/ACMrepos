#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;


int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){

        string AX;
        getline(cin,AX);
       // cout<<AX<<endl;
        bool flag=false;
        for(int i=0;i<AX.size();i++){
            if(AX[0]>='0'&&AX[0]<='9'){
                flag=true;
                break;
            }
            if((AX[i]>='a'&&AX[i]<='z')||(AX[i]>='A'&&AX[i]<='Z')||(AX[i]>='0'&&AX[i]<='9')||(AX[i]=='_')){
                flag=false;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    system("pause");
    return 0;
}
