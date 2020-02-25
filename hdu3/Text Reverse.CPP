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
            // char a[1000];
            // gets(a);
            getline(cin,AX);
            string temp="";
            for(int i=0;i<AX.size();i++){
                if(AX[i]==' '&&temp=="")
                    cout<<AX[i];
                else if(AX[i]==' '&&temp!=""){
                    reverse(temp.begin(),temp.end());
                    cout<<temp<<AX[i];
                    temp="";
                }
                else{
                    temp+=AX[i];
                }
            }
            reverse(temp.begin(),temp.end());
            cout<<temp;
            cout<<endl;
    }

    system("pause");
    return 0;
}
