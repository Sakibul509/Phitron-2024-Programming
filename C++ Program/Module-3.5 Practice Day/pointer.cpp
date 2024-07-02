#include<bits\stdc++.h>
using namespace std;
int main()
{

//    int a=5;               //suppose ,a er address=AF,a_ptr er address=BF
//    int *a_ptr=&a;        //a_ptr=AF(a er address)
//    cout<<a<<endl;        //jokhn a print korbo tokhn a er value 5 print hobe
//    cout<<&a<<endl;      //jokhn &a print korbo tokhn a er add AF print hobe 
//    cout<<a_ptr<<endl;  //jokn a_ptr print korbo tkn a er add AF print hobe jake a_ptr er value bola hoy
//    cout<<&a_ptr<<endl; //jokn &a_ptr print korbo tokhn a_ptr er add BF print hobe 
//    cout<<*a_ptr<<endl; //(dereferencing)jokhn *a_ptr print korbo tokhn a er value 5 print hobe 


    int a =3;
    int *b=&a;
    int **c=&b;
    cout<<a<<endl;    // a er value 3 print hobe
    cout<<&a<<endl;  // a er address AF print hobe 
    cout<<b<<endl;  //b er value holo a er address AF
    cout<<*b<<endl; //b er modde thaka a er address er value 3 print hobe
    cout<<&b<<endl; //b er address BF print hobe 
    cout<<c<<endl;  //c er value holo b er address BF print hobe
    cout<<&c<<endl; //c er address CF print hobe 
    cout<<**c<<endl;// c er modde thaka b er address er value r kase jabe b er value a er adress sei a address thaka value 3 print korbe 

    return 0;
}