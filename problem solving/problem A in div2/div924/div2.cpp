#include "iostream"
using namespace std;
bool rectangle(int a,int b){
    if(a%2==0&&b%2==0){
        return true;
    }
    else if(a%2!=0&&b%2!=0) {
        return false;
    }
    else{
        if(a%2==0&&b%2!=0){
            int new_a=a/2;
            if(2*new_a==a){
                if(b*2!=b&&b*2!=a){
                    return true;
                }
                else return false;
            }

        }
        else {
            int new_b=b/2;
            if(2*new_b==b){
                if(2*a!=a&&2*a!=b) return true;
                else return false;
            }
        }

    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
if(rectangle(a, b))   {
    cout<<"Yes"<<"\n";
}   else{
    cout<<"No\n";
}
    }
}