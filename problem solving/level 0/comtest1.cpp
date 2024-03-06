#include "iostream"
#include "cmath"
using namespace std;
void A(){
    long long n;
    cin>>n;
    cout<<long(ceil(n/5.0)+ceil((n%5)/5))<<"\n";
}
void B(){
    int c,k;
    cin>>c>>k;
    string s;
    cin>>s;
    int cnt =0;
    bool check= false;
    int maxm=0;
    for(int i=0;i<c;i++){
        if(s[i]=='1'){
            cnt=0;
        }
        else{
            cnt++;
            maxm=max(cnt,maxm);
            if(maxm>=k+1){
                check=true;
                break;
            }
        }


    }

    string ans =(check)?"yes":"no";
    cout<<ans<<"\n";

}
void c(){
    long long n;
    cin>>n;
    cout<<n-1<<"\n";
}
void D(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int cnt =-1;
string ans = string (max(a.size(),b.size())-min(a.size(),b.size()),'0');
if(a.size()<b.size()) a=ans+a;
else b=ans+b;
//cout<<a<<" "<<b;
    for(int i=a.size() ;i>=0;i--) {
        if(a[i]!=b[i]) {

            break;
        }
        else {
            cnt++;
//            cout<<cnt;
        }
    }
    cout<<cnt<<"\n";
}
void E(){
    int n;
    cin>>n;
    string ans = (n==0)?"Yes":"No";
    cout<<ans<<"\n";
}
void F(){
    long long n,m;
    cin>>n>>m;
    long long ans=n/m;

    if(ans%2==0){
        cout<<"Amr won";
    }
    else {
        cout<<"Ali won";
    }
}
void G(){
    long long a,b;
    cin>>a>>b;
    string ans = ((a%10)%(b%10)==0||(b%10)%(a%10)==0)?"Brothers":"Not brothers";
    cout<<ans;
}
void H(){
    int n;
    long long m;
    cin>>n>>m;
    long long arr[n];
    long long cnt=m;
    for(int i=0;i<n;i++){

cin>>arr[i];

}
    long long counter=0;
 if(arr[0]==-1){
     for(long long i=0;i<n;i++){
         if(arr[i]==-1) counter++;
         else break;
     }
     for(long long  i=counter-1;i>=0;i--){
         if(arr[i]!=0){
             arr[i]=arr[i+1]-1;
         }
         else{
             arr[i]=m-1;
         }

     }
     for(int i=counter;i<n;i++){
         if(arr[i]==-1){
             arr[i]=(arr[i-1]+1)%m;
         }
     }
 }
 else {
     for(int i=1;i<n;i++){
         if(arr[i]==-1){

         arr[i]=(arr[i-1]+1)%m;
         }
     }
 }
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";

    }
    cout<<"\n";
}
void I(){
    int n;
    cin>>n;

    string t;
    string s;
    cin>>s;
    cin>>t;
    if(t.find('m')!=string::npos) cout<<"YES";
    else cout<<"NO";
}
void J() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    bool valid_i[n];
    for (int i = 0; i < n; i++) valid_i[i] = false;
    bool valid_j[m];
    for (int i = 0; i < m; i++) valid_j[i] = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j]=='B') {
                valid_i[i]= true;
                valid_j[j]=true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if(valid_i[i]==false) continue;
        for (int j = 0; j < m; j++) {
            if(valid_j[j]==false) continue;
            else {
            cout << arr[i][j];

            }
        }
        cout << "\n";
    }
}
int main() {
 J();
}