#include "iostream"
using namespace std;
void leastproduct(){
    int n,product=1;
    cin>>n;
    int arr[n];
    int zero=0,neg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
if(arr[i]==0)zero++;
else if(arr[i]<0)neg++;

    }
if(zero){
    cout<<0<<"\n";
}
else if(neg%2){
    cout<<0<<"\n";

}
else{
    cout<<1<<"\n";
    cout<<1<<" "<<0<<"\n";
}
}
int main(){
    int t;
    cin>>t;
    while (t--){
        leastproduct();
    }
}