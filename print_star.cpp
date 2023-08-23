#include <iostream>
#include <windows.h>
using namespace std;

// --------------------------------------------------------------
void left(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=1;j<=i;j++){          // j == 1 to i
            cout<<"*";
            Sleep(500);        
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // *
    // **
    // ***
    // ****
    // *****
// --------------------------------------------------------------
void right(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n; 
    cout<<endl;   
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>0;j--){         //j == n-1 to 1
            cout<<" ";
        }
        for(int k=1;k<=i;k++){          // k == 1 to i
            cout<<"*";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     *
    //    **
    //   ***
    //  ****
    // *****
// --------------------------------------------------------------
void left_down(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl; 
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // *****
    // ****
    // ***
    // **
    // *
// --------------------------------------------------------------
void right_down(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=a;k>=1;k--){
            cout<<"*";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // *****
    //  ****
    //   ***
    //    **
    //     *
// -------------------------------------------------------------- 
void pyramid(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl; 
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=a-1;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<i;l++){
            cout<<"*";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     *
    //    ***
    //   *****
    //  *******
    // *********   
// -------------------------------------------------------------- 
void pyramid_1(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl; 
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=a;k>=1;k--){
            cout<<"*";
        }
        for(int l=a-1;l>=1;l--){
            cout<<"*";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //  *********
    //   *******
    //    *****
    //     ***
    //      * 
// -------------------------------------------------------------- 
void pyramid_2(){
    int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl; 
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=a-1;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
} 
    // OUTPUT-->
    // Enter no of lines: 5
    //     * 
    //    * *
    //   * * *
    //  * * * *
    // * * * * *  
// --------------------------------------------------------------
void pyramid_3(){
     int n;
    cout<<"Enter no of lines you wanna print: ";
    cin>>n;
    cout<<endl; 
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        for(int k=a;k>=1;k--){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
} 
    // OUTPUT-->
    // Enter no of lines: 5
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     * 
// --------------------------------------------------------------   
void print()
{
    int choice;
    do{
        cout<<"\t---Menu---"<<endl;
        cout<<"1. Left Right Angled Triangle"<<endl;
        cout<<"2. Right Right Angled Triangle"<<endl;
        cout<<"3. Downword Left Right Angled Triangle"<<endl;
        cout<<"4. Downword Right Right Angled Triangle"<<endl;
        cout<<"5. Normal Pyramid"<<endl;
        cout<<"6. Downword Normal Pyramid"<<endl;
        cout<<"7. Pyramid with space"<<endl;
        cout<<"8. Downword Pyramid with space"<<endl;
        cout<<"9. Exit"<<endl;
        
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice){
            case 1: left(); 
                break;
            case 2: right();
                break;
            case 3: left_down(); 
                break;
            case 4: right_down();
                break;
            case 5: pyramid(); 
                break;
            case 6: pyramid_1();
                break;
            case 7: pyramid_2();
                break;
            case 8: pyramid_3();
                break;
            default: cout<<"\n\t---Thank You---"<<endl;
        }
    }while(choice!=9);
}

int main(){
    print();
    return 0;
}
    
    
    



