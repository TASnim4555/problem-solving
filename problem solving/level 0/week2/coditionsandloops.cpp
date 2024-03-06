#include<bits/stdc++.h>

using namespace std;

void counting(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
}
void odd(){
    int n;
    cin>>n;
    for(int i=0;i<n;i+=2){
        cout<<i+1<<"\n";
    }
}
void divisible(){
    int n,x;
    cin>>n>>x;
   bool check= false;
   for(int i=1;i<=n;i++){
if(!((i)%x)) { cout << i  << " ";
check =true;
}
   }
   if(!check){
       cout<<-1;
   }
}
void task(){
    long long a,b,sum=0;
    cin>>a>>b;
    for(long long i=a;i<=b;i++){
        sum+=i;
    }
    cout<<sum;
}
void good(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(!(n%i)){
            cout<<i<<" ";
        }
    }
}
void shape_one(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        if(i!=n){
            cout<<"\n";

        }
    }
}
void shape_two(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<'*';
        }
        if(i!=n-1){
            cout<<"\n";

        }
    }
}
void shape_three(){
    int n;
    cin>>n;
    for(int i=1;i<=(n/2)+1;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
            cout<<"\n";


    }

    for(int i=(n/2)+2;i<=n;i++){
        for(int j=n-i+1;j>0;j--){
            cout<<'*';
        }
        if(i!=n){
            cout<<"\n";

        }
    }
}
void shape_four(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<'*';
        }
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        cout<<"\n";
    }
}
void shape_five(){
    int n;
    cin>>n;
    for(int i=1;i<=(n/2)+1;i++){
        for(int j=1;j<=((n/2)+1)-i;j++){
            cout<<' ';
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<'*';
        }
        for(int j=1;j<=((n/2)+1)-i;j++){
            cout<<' ';
        }
        cout<<"\n";
    }
    for(int i=(n/2);i>=1;i--){
        for(int j=(n/2)-i;j>=0;j--){
            cout<<' ';
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<'*';
        }
        for(int j=(n/2)-i;j>=0;j--){
            cout<<' ';
        }
        cout<<"\n";
    }
}
void shape_six(){
    int n;
    cin>>n;
    for(int i=(n/2)+1;i>=1;i--){
        for(int j=(n/2)-i;j>=0;j--){
            cout<<' ';
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<'*';
        }
        for(int j=(n/2)-i;j>=0;j--){
            cout<<' ';
        }
        cout<<"\n";
    }

    for(int i=1;i<=(n/2)+1;i++){
        for(int j=1;j<=((n/2)+1)-i;j++){
            cout<<' ';
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<'*';
        }
        for(int j=1;j<=((n/2)+1)-i;j++){
            cout<<' ';
        }
        cout<<"\n";
    }
}
void calculating_function(){
    long long n;
    cin>>n;
    long long ans;
if(n%2==0){
    ans=n/2;
    cout<<ans;

}
else{
    ans=n/2+1;
    cout<<-ans;
}

}
void how_many_divisors(){
    int a,b,c;
    cin>>a>>b>>c;
    int counter=0;
    for(int i=a;i<=b;i++){
        if(c%i==0){
            counter++;
        }

    }
    cout<<counter<<"\n";
}
void swapping_two_numbers(){
    int x,y;
    while(cin>>x>>y){
        if(x==0&&y==0) break;
        else {
            if(x>=y) cout<<y<<" "<<x<<"\n";
            else cout<<x<<" "<<y<<"\n";
        }
    }
}
void circle_in_rectangle(){
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
string ans= (x+r>w||x-r<0||y+r>h||y-r<0)?"No":"Yes";
cout<<ans<<"\n";
}
void medium_number(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c){
        if(b<=c){cout<<c<<"\n";}
        else cout<<b<<"\n";
    }
    else if(b>a&&b>=c){
        if(a<=c) cout<<c<<"\n";
        else cout<<a<<"\n";
    }
    else{
        if(a<=b)cout<<b<<"\n";
        else cout<<a<<"\n";
    }
}
void to_my_critics(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10||a+c>=10||b+c>=10) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
void cyber(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){
        int move;
        cin>>move;
        string type;
        cin>>type;
        for(int j=1;j<=move;j++){
            if(type[j-1]=='U'){
                if(arr[i]==0){
                    arr[i]=10;
                }
                arr[i]-=1;
            }
            else {
                if(arr[i]==9){
                    arr[i]=-1;

                }
                arr[i]+=1;
            }
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cyber();
    }

}