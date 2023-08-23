#include <iostream>
#include <fstream>
using namespace std;

void write(){
    char give_info[2000];
    ofstream Out_file;
    Out_file.open("Info.txt",ios::out);
    cout<<"Enter info= \n";
    fgets(give_info,2000,stdin);
    Out_file<<give_info;
    Out_file.close();
}

void read(){
    char get_info[2000];
    ifstream In_file;
    In_file.open("Info.txt",ios::in);
    In_file.getline(get_info,2000);
    cout<<"File content = \n";
    cout<<get_info;
    In_file.close();
}


int main()
{
    write();
    cout<<endl;
    read();
    return 0;
}