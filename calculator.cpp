#include <bits/stdc++.h>
using namespace std;

double div(double a,double b){
	return a/b;
}

double mod(double a,double b){
    return a%b;
}

int main(){
    double a,b;
    cin>>a>>b;
    cout<<"Sum result\n";
    cout<<sum(a,b)<<endl;

    cin>>a>>b;
    cout<<"Sub result\n";
    cout<<sub(a,b)<<endl;

    cin>>a>>b;
    cout<<"Mul result\n";
    cout<<mul(a,b)<<endl;
    
    cin>>a>>b;
    cout<<"Mod result\n";
    cout<<mod(a,b)<<endl;

    cin>>a>>b;
    cout<<"Div result\n";
    cout<<div(a,b)<<endl;
    return 0;
}
