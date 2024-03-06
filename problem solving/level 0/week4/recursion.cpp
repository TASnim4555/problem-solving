#include "iostream"
#include "string"
#include "cmath"
using namespace std;
const int N=1101;
int arr[N];
int sum(int n){
    if(n==0) return 0;
    else return arr[n-1]+sum(n-1);
}
int fibonoci(int n){
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return fibonoci(n-1)+ fibonoci(n-2);
    }
}
string superDigit(string input, long long  k){
    if(input.size()==1){
        return input;
    }
    else {

        long long sum=0;
        for(int i=0;i<input.size();i++){
            sum+=(input[i]-'0');
        }
        sum*=k;

        return superDigit(to_string(sum),1);
    }
}
int divide(int n,int m ){
    if(n<=m){
        return 1;
    }
    else {
        if(n%2==0){
            return divide(n/2,m)+ divide(n/2,m);
        }
        else {
            return divide(n/2,m)+ divide((n/2)+1,m);

        }
    }

}

int i;
int inner_sum=0;
int inner_product(int arr1[],int arr2[],int n){
    if(n<0) return 0 ;
    else {
        return arr1[n]*arr2[n]+ inner_product(arr1,arr2,n-1);
    }
}
bool spells(long long s,long long d,int n,bool ck=false){
    if(n<0) return ck ;
    long long x,y;
    cin>>x>>y;
    if(x<s&&y>d){
        ck=true;

    }
       return spells(s,d,n-1,ck);







}
int main(){
int n;
cin>>n;
long long s,d;
cin>>s>>d;

string answer = spells(s,d, n - 1) ? "Yes" : "No";
cout<<answer<<"\n";
}