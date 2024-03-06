#include "iostream"
#include "algorithm"
using namespace std;
void sum(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    sort(arr,arr+n);
    sum+=arr[1]-arr[0];
    for(int i=2;i<n;i++){
        sum+=arr[i]-arr[i-1];
    }
    cout<<sum<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sum();
    }
}