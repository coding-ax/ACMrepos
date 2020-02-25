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
    while(t--){
        string temp;
        cin>>temp;
        int  flag1,flag2,flag3,flag4;
        flag1=flag2=flag3=flag4=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>='a'&&temp[i]<='z'){
                flag1=1;
            }
            else if(temp[i]>='A'&&temp[i]<='Z'){
                 flag2=1;
            }
            else if(temp[i]>='0'&&temp[i]<='9'){
                  flag3=1;
            }
            else
                  flag4=1;

        }
        if(flag1+flag2+flag3+flag4>=3&&temp.size()>=8&&temp.size()<=16){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    system("pause");
    return 0;
}
