#include <iostream>
using namespace std;

// --------------------------------------------------------------
void left(int n){
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=1;j<=i;j++){          // j == 1 to i
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 1
    // 12
    // 123
    // 1234
    // 12345 
// --------------------------------------------------------------
void left_01(int n){
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=i;j>=1;j--){          // j == i to 1
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 1
    // 21
    // 321
    // 4321
    // 54321
// --------------------------------------------------------------
void right(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>0;j--){         //j == n-1 to 1
            cout<<" ";
        }
        for(int k=1;k<=i;k++){          // k == 1 to i
            cout<<k;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     1
    //    12
    //   123
    //  1234
    // 12345
// --------------------------------------------------------------
void right_01(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>0;j--){         //j == n-1 to 1
            cout<<" ";
        }
        for(int k=i;k>=1;k--){          // k == i to 1
            cout<<k;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     1
    //    21
    //   321
    //  4321
    // 54321
// --------------------------------------------------------------
void left_down(int n){
    for(int i=n;i>=1;i--){              // i == n to 1
        for(int j=1;j<=i;j++){          // j == 1 to i 
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 12345
    // 1234
    // 123
    // 12
    // 1
// --------------------------------------------------------------
void left_down_01(int n){
    for(int i=n;i>=1;i--){              // i == n to 1
        for(int j=i;j>=1;j--){          // j == i to 1
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 54321
    // 4321
    // 321
    // 21
    // 1
// --------------------------------------------------------------
void right_down(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=1;j<i;j++){           // j == 1 to i
            cout<<" ";
        }
        for(int k=a;k>=1;k--){          // k == n to 1
            cout<<k;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 54321
    //  4321
    //   321
    //    21
    //     1
// -------------------------------------------------------------- 
void right_down_01(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=1;j<i;j++){           // j == 1 to i
            cout<<" ";
        }
        for(int k=1;k<=a;k++){          // k == 1 to n
            cout<<k;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    // 12345
    //  1234
    //   123
    //    12
    //     1
// --------------------------------------------------------------
void pyramid(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>=1;j--){        // j == n-1 to 1
            cout<<" ";
        }
        for(int k=1;k<=i;k++){          // k == 1 to i
            cout<<k;
        }
        for(int l=i-1;l>=1;l--){        // l == i-1 to 1
            cout<<l;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321   
// -------------------------------------------------------------- 
void pyramid_01(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>=1;j--){        // j == n-1 to 1
            cout<<" ";
        }
        for(int k=1;k<=i;k++){          // k == 1 to i
            cout<<i;
        }
        for(int l=i-1;l>=1;l--){        // l == i-1 to 1
            cout<<i;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //     1
    //    222
    //   33333
    //  4444444
    // 555555555
// -------------------------------------------------------------- 
void pyramid_02(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=a-1;j>=1;j--){        // j == n-1 to 1
            cout<<" ";
        }
        for(int k=1;k<=i;k++){          // k == 1 to i 
            cout<<i<<" ";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
} 
    // OUTPUT-->
    // Enter no of lines: 5
    //     1 
    //    2 2
    //   3 3 3
    //  4 4 4 4
    // 5 5 5 5 5 
// --------------------------------------------------------------
void pyramid_03(int n){
    int a=n;
    for(int i=1;i<=n;i++){              // i == 1 to n
        for(int j=1;j<=i;j++){          // j == 1 to i
            cout<<" ";
        }
        for(int k=1;k<=a;k++){          // k == 1 to n 
            cout<<k;
        }
        for(int l=a-1;l>=1;l--){        // l == n-1 to 1
            cout<<l;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //  123454321
    //   1234321
    //    12321
    //     121
    //      1
// --------------------------------------------------------------
void pyramid_04(int n){
    int a=n;
    for(int i=n;i>=1;i--){              // i == n to i
        for(int j=n;j>=a;j--){          // j == n to a
            cout<<" ";
        }
        for(int k=1;k<=a;k++){          // k == 1 to n 
            cout<<i;
        }
        for(int l=a-1;l>=1;l--){        // l == n-1 to 1
            cout<<i;
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //  555555555
    //   4444444
    //    33333
    //     222
    //      1
// --------------------------------------------------------------
void pyramid_05(int n){
    int a=n;
    for(int i=n;i>=1;i--){              // i == n to 1
        for(int j=n;j>=a;j--){          // j == n to a
            cout<<" ";
        }
        for(int k=1;k<=a;k++){          // k == 1 to n 
            cout<<i<<" ";
        }
        a--;
        cout<<endl;
    }
    cout<<endl;     //Optional
}
    // OUTPUT-->
    // Enter no of lines: 5
    //  5 5 5 5 5 
    //   4 4 4 4
    //    3 3 3
    //     2 2
    //      1
// --------------------------------------------------------------
  
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    // left(n);s
    // left_01(n);
    // right(n);
    // right_01(n);
    // left_down(n);
    // left_down_01(n);
    right_down(n);
    // right_down_01(n);
    // pyramid(n);
    // pyramid_01(n);
    // pyramid_02(n);
    // pyramid_03(n);
    // pyramid_04(n);
    // pyramid_05(n);
    return 0;
}