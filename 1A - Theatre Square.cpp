#include <iostream>
using namespace std;
int main()
{
    int m,n;
    long int a;
    cin>>m>>n>>a;
    long long int w = m/a;
    if(a*w < m){
        w++;
    }
    long long int h = n/a;
    if(a*h < n){
        h++;
    }
    cout<<w*h<<endl;
}
