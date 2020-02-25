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

int check(int a,int b,int c,int d){
     a%=12; c%=12;
     int count1;
     int count2;
     int count;
     count1=(a*60+b)*11;
      count2=(c*60+d)*11;
    if(count1>count2) count2+=720*11;
    count=count2/720-count1/720;
     if(count1==0) count++;
     return count;
}
int main(){
//     int a,b,c,d;
//     while(cin>>a>>b>>c>>d){
//     if(a==0&&b==0&&c==0&&d==0)break;
//         cout<<check( a, b,c, d)<<endl;
// }

    string a="V";
    a+=(1+'0');
    cout<<a<<endl;
    system("pause");
    return 0;
}
// int check(int a,int b,int c,int d){
//       //  int temp=60-b;
//       int count=0;
//       int cas;
//         if(a==c&&b<d)
//         cas=1;
//         if(a==c&&b>d)
//         cas=2;
//         if(a>c)
//         cas=3;
//        if(a<c)
//         cas=4;
//         //default:a==c b==d return 0
//       switch(cas){
//           case 1:
//             if(a*5>=b&&a*5<=d)
//             count=1;
//           break;
//           case 2:
//            count=10;
//           if(a*5>=b)
//           count++;
//           if(c*5<=d)
//           count++;
//           break;
//           case 3:
//             count=12-(a+1)+c-1;
//             if(a*5>=b)
//           count++;
//           if(c*5<=d)
//           count++;
//           break;
//           case 4:
//           count=c-a-1;
//            if(a*5>=b)
//           count++;
//           if(c*5<=d)
//           count++;
//           break;
//           default:return 0;
//           break;
//       }
//       return count;
// }
// int main(){
//     int a,b,c,d;
//     while(cin>>a>>b>>c>>d){
//     if(a==0&&b==0&&c==0&&d==0)break;
//         cout<<check( a, b,c, d)<<endl;
// }
//     system("pause");
//     return 0;
// }
