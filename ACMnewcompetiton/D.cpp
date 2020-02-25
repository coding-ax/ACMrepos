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
        double k,j,q,a;
        cin>>k>>j>>q>>a;
        k=k+a;
        j=j-0.5*a;
        q=q-0.4*a;
        j+=a;
        k-=a*0.5;
        q-=a*0.5;
        q+=a;
        k-=0.4*a;
        j-=0.4*a;
        cout<<k/100.0<<" "<<j/100.0<<" "<<q/100.0<<endl;
    }

    system("pause");
    return 0;
}
