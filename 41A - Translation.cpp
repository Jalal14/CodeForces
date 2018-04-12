#include <iostream>
using namespace std;
int main()
{
    string s,t;
    bool match = true;
    char c;
    cin>>s;
    cin>>t;
    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<"\t"<<t[t.length()-i-1]<<endl;
        if(s[i]!=t[t.length()-i-1]){
            match = false;
            break;
        }
    }
    if(match){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
