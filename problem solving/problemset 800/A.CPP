#include "iostream"
#include "algorithm"
using namespace std;
void Make_Equal(){
    int n;
    cin>>n;
    long long arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){cin>>arr[i]; sum+=arr[i];}
    long long k=sum/n;
 bool ck =true;
 for(int i=1;i<n;i++){

     while(true){

         if(arr[i-1]>k){
             arr[i]++;
             arr[i-1]--;


         }
         else {


             break;
         }
     }
 }
 for(int i=1;i<n;i++){
     if(arr[i-1]!=arr[i]) ck= false;
 }
 string answer = (ck)?"YES":"NO";
 cout<<answer<<"\n";
}
void recovering_string(){
    int n;
    cin>>n;
    int sum =n;
    string s ;
    s= "";
 if(n<=28){
     s+="aa";
     s+=char(((n-2)+'a')-1);
 }
 else if(n>28&&n<=52){
     s+='a';
     s+=char(((n-27)+'a')-1);
     s+='z';
 }
 else{
     s+=char(((n-52)-1)+'a');
     s+="zz";
 }
 cout<<s<<"\n";
}
void rudolf_ticket(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    int arr2[m];
    int cnt =0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int j=0;j<m;j++) cin>>arr2[j];
    int sum;
    sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        for(int j=0;j<m;j++){
            sum+=arr2[j];
            if(sum<=k)cnt++;
            sum-=arr2[j];
        }
        sum-=arr[i];
    }
    cout<<cnt<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
recovering_string();    }
}