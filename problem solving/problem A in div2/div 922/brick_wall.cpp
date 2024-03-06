#include "iostream"

using namespace std;
void brick_wall(){
    int n,m;
    cin>>n>>m;
        cout<<n*(m/2)<<"\n";

}
int main(){
    int t;
    cin>>t;
    while (t--){
        brick_wall();
    }
};