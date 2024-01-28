#include <iostream>

using namespace std;
typedef struct employee{
    int id;
    int roll;
    float num;
}emp;

union money {
    int a;
    float see;
};
int main(){
    // typedef and structure
    struct employee alvi;
    emp tushar;
    alvi.id = 1;
    alvi.roll = 1111;
    alvi.num = 11.11;
    // cout<<alvi.id<<"     "<<alvi.roll<<"    "<<alvi.num<<endl;

    tushar.id = 2;
    tushar.roll = 2222;
    tushar.num = 22.22;
    // cout<<tushar.id<<"     "<<tushar.roll<<"    "<<tushar.num<<endl;

    // union 
    union money m1;
    m1.a = 1000;
    m1.see = 11.11;
    // cout<<m1.a<<"  "<<m1.see<<endl;

    // enum
    enum meal {a,b,c};
    // cout<<a;
    // cout<<b;
    // cout<<c;
    meal m2 = a;
    cout<<m2;
    return 0;
}