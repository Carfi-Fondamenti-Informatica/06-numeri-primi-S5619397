#include<iostream>
#include "lib.h"
using namespace std;

int main(){
    int h=0, f=2;
    cin>>h;
bool a=numeroprimo(h, f);
if ( a == true){
    cout<<"numero primo";
}
else {
    cout<<"numero non primo";
    
}
}
