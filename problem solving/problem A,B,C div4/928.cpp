#include "iostream"
#include "string"

using namespace std;
void A_div4(){
    string s;
    cin>>s;
    int cntA=0,cntB=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A')cntA++;
        else cntB++;
    }
    char ans = (cntA>cntB)?'A':'B';
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        A_div4();
    }
}