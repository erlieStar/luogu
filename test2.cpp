#include <iostream>
using namespace std;
char ch[100][100]={'0'};
int main()
{
    int n,m;
    cin>>n>>m;
//	ÊäÈë
    for(int i=0;i<n;i++)
    {	for(int j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
//	ÅÐ¶Ï
    for(int i=0;i<n;i++)
    {	for(int j=0;j<m;j++)
        {	if(ch[i][j]=='?')
            {
                ch[i][j]=48;
                // 下
                if(ch[i+1][j]=='*')
                    ch[i][j]++;
                // 上
                if(ch[i-1][j]=='*')
                    ch[i][j]++;
                // 右上
                if(ch[i-1][j+1]=='*')
                    ch[i][j]++;
                //
                if(ch[i-1][j-1]=='*')
                    ch[i][j]++;
                // 上
                if(ch[i-1][j]=='*')
                    ch[i][j]++;
                if(ch[i][j+1]=='*')
                    ch[i][j]++;
                if(ch[i][j-1]=='*')
                    ch[i][j]++;
            }
        }
    }
//	Êä³ö
    for(int i=0;i<n;i++)
    {	for(int j=0;j<m;j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    return 0;
}