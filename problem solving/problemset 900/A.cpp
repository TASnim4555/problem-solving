#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
void following_the_string(){
    string s;
    s="";
    int n;
    cin>>n;
vector<pair<char,int>>arr2;
int arr[n];
for(char x='a';x<='z';x++){
    arr2.push_back(make_pair(x,0));
}
for(int i=0;i<n;i++) {
        cin >> arr[i];
            for(int j=0;j<arr2.size();j++){
                if(arr[i]==arr2[j].second){

                    s+=arr2[j].first;
                    arr2[j].second++;
                break;
                }
            }


    }


    cout<<s;


}
int main(){
    int t;
    cin>>t;
    while (t--){

    following_the_string();
    if(t!=0){
        cout<<"\n";
    }
    }
}