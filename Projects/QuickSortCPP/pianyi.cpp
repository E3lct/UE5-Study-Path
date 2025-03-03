#include <iostream>
using namespace std;

int n, m;
char a[103][103]={0};
int search(char a[103][103], int x, int y) 
{
    if(a[x][y]=='*')
    {
        return -1;
    }
    int dx[]={-1,0,1};                            //设置偏移量,dx
    int dy[]={-1,0,1};                            //设置偏移量,dy
    int account=0;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[x+dx[i]][y+dy[j]]=='*')
            {
                account++;
            }
        }
    }
    return account;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(search(a, i, j)>=0)
            {
                cout<<search(a, i, j);
            }
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
    return 0;
}