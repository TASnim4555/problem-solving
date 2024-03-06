#include "iostream"
#include "algorithm"
using namespace std;
void A(){
    int n,m;
    cin>>n>>m;
    cout<<max(n,m)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        A();
    }
}