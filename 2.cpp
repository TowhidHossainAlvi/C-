#include<iostream>

using namespace std;

int glo = 10;
void sum(){
    cout<<glo;
}
int main(){
    sum();
    int glo = 20;
    cout<<"\n"<<glo;
    glo = 30;
    cout<<"\n"<<glo;

    return 0;
}