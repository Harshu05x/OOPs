#include <iostream>
#include <string>
using namespace std;

int total(int arr[]){
    int total=0;
    for(int i=0;i<5;i++){
        total+=arr[i];
    }
    return total;
}

void deatils(){
    string name;
    cout<<"Enter your name:"<<endl;
    getline(cin,name);

    int prn;
    cout<<name<<" enter your PRN num:"<<endl;
    cin>>prn;

    int marks[5];
    cout<<"enter your marks OOP:"<<endl;
    cin>>marks[0];
    cout<<"enter your marks OS:"<<endl;
    cin>>marks[1];
    cout<<"enter your marks DSA:"<<endl;
    cin>>marks[2];
    cout<<"enter your marks DM:"<<endl;
    cin>>marks[3];
    cout<<"enter your marks CG:"<<endl;
    cin>>marks[4];
    

    cout<<"DEATILS-->"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"PRN no.: "<<prn<<endl;

    cout<<"Total marks are: "<<total(marks)<<endl;
    int perce=total(marks)/5.0;
    cout<<"Percentage: "<<total(marks)/5.0<<"%"<<endl;

    if(perce>=90 ) cout<<"You got Distinction";
    else if(perce>=75 && perce<90) cout<<"You got 1st class";
    else if(perce>=60 && perce<75) cout<<"You got 2nd class";
    else if(perce>=35 && perce<60) cout<<"You got 3rd class";
    else cout<<"You failed.";
}

int main()
{   
    deatils();
    return 0;
}