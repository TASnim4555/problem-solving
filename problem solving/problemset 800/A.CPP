#include "iostream"

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
    string s="";
    int s1,s2,s3;
    for(int i=1;i<=26;i++){
        sum-=i;
        s1=i;
        for(int j=26;j>=1;j--){
            sum-=j;
            if(sum>0){
                s2=j;
                break;
            }
            else {
                sum+=j;
            }
        }
        sum+=i;
    }
    s3=n-(s1+s2);
    s+=char (s1);
    s+=char (s2);
    s+=char (s3);
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
recovering_string();    }
}