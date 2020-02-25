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
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;
struct node{
    string name;
    int count;
}a[maxn];
bool cmp(node a,node b){
        if(a.count>b.count)
        return true;
        else if(a.count==b.count)
        return a.name<b.name;
        else
        return false;
}
int main(){
    ios::sync_with_stdio(false);
    map<string ,int > Hwzz;
    string temp;
    int n;//表示个数
    cin>>n;
    while (n--){//输入
        cin>>temp;
        Hwzz[temp]++;
    }
   int i=0;
    for( map<string,int>::iterator it=Hwzz.begin();it!=Hwzz.end();it++){
        a[i].name=(*it).first;
        a[i++].count=(*it).second;
    }
    sort(a, a+i,cmp);
    for(int j=0;j<i;j++){
        cout<<a[j].name<<a[j].count<<endl;
    }
    system("pause");
    return 0;
}
