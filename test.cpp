#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

long long result(int n, int d) {
    long long sum = 1;
    for (int i = 0; i < d; ++i) {
        sum *= n;
    }
    return sum;
}

int main(){
    int n,k;
    long long ans[10001]={0};
    cin>>k;
    char a[100]={};
    for(int i=0;i<k;++i){
        cin>>n>>a;
        for(int j=strlen(a)-1,d=0;j>=0;--j,++d){
            if(a[j]=='A')ans[i]+=10*result(n, d);
            else if(a[j]=='B')ans[i]+=11*result(n, d);
            else if(a[j]=='C')ans[i]+=12*result(n, d);
            else if(a[j]=='D')ans[i]+=13*result(n, d);
            else if(a[j]=='E')ans[i]+=14*result(n, d);
            else if(a[j]=='F')ans[i]+=15*result(n, d);
            else if(a[j]>='0'&&a[j]<='9')ans[i]+=(a[j]-'0')*result(n, d);
        }
    }
    for(int i=0;i<k;++i)cout<<ans[i]<<endl;

    return 0;
}