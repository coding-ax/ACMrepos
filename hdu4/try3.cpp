    #include<stdio.h>
    #include<map>
    #include<algorithm>
    using namespace std;
    int main(){
    	int n,a[3005];
    	while(scanf("%d",&n)!=EOF){
    		map<int,int>mapp;

    		for(int i=0;i<n;i++){
    			scanf("%d",&a[i]);
    			mapp[a[i]]++;
    		}
    		int ans=0;
    		for(int i=0;i<n;i++){
    			ans=max(ans,mapp[a[i]]);
    		}
    		printf("%d\n",ans);
    	}
    	return 0;
    }
