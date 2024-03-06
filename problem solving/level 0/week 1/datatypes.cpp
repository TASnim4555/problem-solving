#include "iostream"
#include "cmath"
using namespace std;
void Hello_user(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name;
}
void Datatypes(){
    int x1;
    long long x2;
    char x3;
    float x4;
    double x5;
    cin>>x1>>x2>>x3>>x4>>x5;
    cout<<x1<<"\n"<<x2<<"\n"<<x3<<"\n"<<x4<<"\n"<<x5;
}
void simple_calculator(){
    long long  x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<"\n";
    cout<<x<<" * "<<y<<" = "<<x*y<<"\n";
    cout<<x<<" - "<<y<<" = "<<x-y;


}
void differenece(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"Difference = "<<(a*b)-(c*d);
}
void digit_summation(){
    long long n,m;
    cin>>n>>m;
    cout<<n%10+m%10;
}
void two_numbers(){
    float a,b;
    cin>>a>>b;
    cout<<"floor " <<a<<" / "<<b<<" = "<<floor(a/b)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<"\n";
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<"\n";
// another sol
// int a,b;
//    cin>>a>>b;
// cout<<"floor " <<a<<" / "<<b<<" = "<<(a/b)<<"\n";
//    cout<<"ceil "<<a<<" / "<<b<<" = "<<((a+b-1)/b)<<"\n";
//    cout<<"round "<<a<<" / "<<b<<" = "<<((a+(b/2))/b)<<"\n";
}
void elephant(){
    float x;
    cin>>x;
    cout<<ceil(x/5);
    //another sol
    //cout<<(x+4)/5;
}
void apples(){
    int n,k;
    cin>>n>>k;
    cout<<k%n;
}
void movie(){
    int x,y;
    cin>>x>>y;
    cout<<x-(y/2);
}
void next_even(){
    int x;
    cin>>x;
int ans= (x%2==0)?x+2:x+1;
cout<<ans;
}
void cubic(){
    int x;
    cin>>x;
    cout<<x*x*x<<"\n";
}
void rectangle(){
    int a,b;
    cin>>a>>b;
    cout<<a*b<<" "<<2*(a+b)<<"\n";
}
void watch(){
    int S;
    cin>>S;
    int h = S/3600;
    int remain=S-(h*3600);
    int m = remain/60;
    int s = (remain-(m*60));
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void sum_squares(){
    long long a,b;
    cin>>a>>b;
    cout<<(a*a)+(b*b);
}
void append_3(){
    int n;
    cin>>n;
    cout<<3<<n<<3;
}
int main(){
append_3();
}