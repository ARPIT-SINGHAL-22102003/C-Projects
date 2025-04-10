#include<bits/stdc++.h>
using namespace std;
double add(double a, double b){
    return a+b;
}
double sub(double a, double b){
    return a-b;
}
double mul(double a, double b){
    return a*b;
}
double div(double a, double b){
    if(b == 0){
        return -1;
    }
    else{
        return a/b;
    }
}
int main(){
    double a, b;
    char op;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter the value of b: ";
    cin>>b;

    switch(op){
        case '+': cout<<add(a,b)<<endl; break;
        case '-': cout<<sub(a,b)<<endl; break;
        case '*': cout<<mul(a,b)<<endl; break;
        case '/': cout<<div(a,b)<<endl; break;
        default: cout<<"Invalid Operator";

    }

}