#include "iostream"
#include "cstring"
using namespace std;
void everything(){
    int n,k;
    cin>>n>>k;
    string ans="";
    while(n--){
        for(int i=1;i<=k;i++){
            ans+= char(96+i);
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        everything();

    }
}