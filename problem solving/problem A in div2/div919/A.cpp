#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
void constraints(){
    int n;
    cin>>n;
    vector<long long>equality;
    long long s =0;
    long long l =1e9;
    while(n--){
        int a;
        long long x;
        cin>>a>>x;

        if(a==1){
            s=max(s,x);
        }
        else if(a==2){
            l=min(l,x);
        }
        else{
            equality.push_back(x);
        }
    }
int cnt =0;
    for(long long i:equality){
        if(i>=s&&i<=l) cnt++;
    }
    if(l-s>=cnt)
    cout<<l-s-cnt+1<<"\n";
    else
        cout<<0<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        constraints();

    }
}