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
    string temp;
    while(cin>>temp){
        char now=temp[0];
       // int count;
       string ans="";
        for(int i=0;i<temp.size();i++){
            if(temp[i]>now){
                now=temp[i];
            }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]==now){
                if(ans==""){
               ans=temp.substr(0,i+1);
               ans+="(max)";
            }
            else{
                ans+=temp[i];
                ans+="(max)";
            }
            }
            else{
                ans+=temp[i];
            }
        }
        cout<<ans<<endl;
    }

    system("pause");
    return 0;
}
