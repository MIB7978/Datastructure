#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(100,1);
    int i;
    for(i=2;i<100;i++)
    if(v[i])
    for(int j=i;i*j<100;j++) v[i*j]=0;
    for(i=2;i<100;i++) if(v[i]) cout<<i<<" ";

}