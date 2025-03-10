#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>q;
    vector<int>a(10);
    vector<int>b(10,2);

    cout<<"分配前长度:"<<q.size()<<endl;
    q.resize(10);
    cout<<"分配后长度:"<<q.size()<<endl;
    q.push_back(1);
    cout<<"插入后长度:"<<q.size()<<endl;
    for(auto t=q.begin();t!=q.end();t++)
    {
        cout<<*t<<"  ";
    }
    cout<<endl<<endl;

    cout<<a.size()<<endl;
    for(auto t=b.begin();t!=b.end();t++)
    {
        cout<<*t<<"  ";
    }
    return 0;
}
