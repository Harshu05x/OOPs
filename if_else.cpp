#include <iostream>
using namespace std;
                   
int main()
{   
    string name;
    cout<<"Enter your name:"<<endl;
    getline(cin,name);

    int age;
    cout<<name<<" enter your age:"<<endl;
    cin>>age;

    if(age>=18) cout<<"You can vote.";
    else cout<<"You can't vote." ;
    return 0;
}