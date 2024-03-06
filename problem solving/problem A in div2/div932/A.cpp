#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
void MAC(){
    long long  n;
    cin>>n;
    string s;
    cin>>s;
string rev =s;
    reverse(rev.begin(),rev.end());

string ans =rev;
string add = ans+s;
for(int i=0;i<s.size();i++){

if(s[i]<add[i]){
    if(n%2!=0){

    cout<<s<<"\n";
    break;
    }
    else{
reverse(rev.begin(),rev.end());
cout<<rev<<"\n";
        break;


    }
}
else if(s[i]>add[i]){
    cout<<add<<"\n";
    break;

}
if(i==s.size()-1){
    if(n%2!=0){

        cout<<s<<"\n";
        break;
    }
    else{
        reverse(rev.begin(),rev.end());
        cout<<rev<<"\n";
        break;


    }
}
}

}
int main(){
    int t;
    cin>>t;
    while (t--){
        MAC();
    }
}