#include<iostream>
using namespace std;
#include<string>

int main() {
    int num1;
    cout<<"Enter age of the person:" ;
    cin >> num1;
    if(num1>17){
            cout<<"The person is an adult";
    }
    else{
        cout<<"The person is not an adult";
    }
    cout<<"\nEnter the name of person:" ;

    string name1;
    cin >> name1;
    cout << "Name of the person is " << name1 << " and his age is " << num1 ;
    
    return 0 ;
}
