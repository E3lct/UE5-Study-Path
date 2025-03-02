#include <iostream>
using namespace std;

int n,m,t,k,a[103][103],b[103][103];
int main()
{
    cin>>n>>m>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    cin>>k;
    while(k--)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==1) 
                {
                    b[i][j]=1;
                    for (int h = max(i - 1, 1); h <= min(i + 1, n); h++) {
                        b[h][j] = 1;
                    }
                    for (int h = max(j - 1, 1); h <= min(j + 1, m); h++) {
                        b[i][h] = 1;
                    }
                }
                
            }
        }
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                a[i][j] = b[i][j];
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
    