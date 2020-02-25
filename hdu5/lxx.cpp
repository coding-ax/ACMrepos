#include <iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
using namespace std;
int IsSquare(int x) {
	if (sqrt(x) == (int)sqrt(x))
		return 1;
	else
		return 0;
}
int find(int s[],int N,int i){
	for (int j = 1; j <=N; j++)
	{
	      if(squareNumCheck(i+s[j])){
                return j;
                break;
          }
          if(s[j]==0){

             return j;
          }
        //   if(i==n&&a[i]!=0&&!squareNumCheck(num+a[i])){
        //       flag=1;
        //   }
	}
	return 0;
}
int main() {
	int T, N;
	int s[50];
	cin >> T;
	while(T--) {
		cin >> N;
		for (int k = 1; k <= N; k++) {
			s[k] = 0;
		}
		int i = 1;
		while(1){
			int k = find(s, N, i);
            cout<<k<<"->";
			if (k)
				s[k] = i;
			else
				break;
			i++;
		}
		cout << i<< endl;
	}
    system("pause");
}
