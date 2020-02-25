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

       char AX[105];
       gets(AX);
        string rr=AX;
         int num[]={0,0,0,0,0};
        for(int i=0;i<rr.size();i++){
             if(AX[i]=='a')//if(AX[i]=='a'||AX[i]=='A')
                num[0]++;
            else if(AX[i]=='e')//||AX[i]=='E')
                num[1]++;
             else if(AX[i]=='i')//||AX[i]=='I')
                num[2]++;
             else if(AX[i]=='o')//||AX[i]=='O')
                num[3]++;
            else if(AX[i]=='u')//||AX[i]=='u')
                num[4]++;
        }
        cout<<"a:"<<num[0]<<endl;
        cout<<"e:"<<num[1]<<endl;
        cout<<"i:"<<num[2]<<endl;
        cout<<"o:"<<num[3]<<endl;
        cout<<"u:"<<num[4]<<endl;
        // if(!(t-1))
        //     cout<<endl;
        if(t>0)
            cout<<endl;

    }

    system("pause");
    return 0;
}
