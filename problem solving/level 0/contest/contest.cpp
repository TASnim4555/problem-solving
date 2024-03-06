#include "iostream"
#include "cmath"
using namespace std;
void A(){
    long long n;
    cin>>n;
    cout<<ceil(n/5.0)+ceil((n%5)/5)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        A();
    }
}