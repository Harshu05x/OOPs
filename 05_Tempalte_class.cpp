#include <iostream>
using namespace std;

template <class T>
void sel_sort(T arr[], int size){
    T temp;
    int min;
    for(int i=0;i<size;i++){
        min = i;
        for(int j=i+1;j<size;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

template <class T>
void display(T arr[],int size){
    for(int i = 0;i<size;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
                   
int main()
{
    int arr[] = {9,8,6,5,4};
    sel_sort(arr,5);
    display(arr,5);
    
    float arr1[] = {3.3,2.5,9.98,1.0,10};
    sel_sort(arr1,5);
    display(arr1,5);
    
    double arr2[] = {999982,123213,785381,901727,664727};
    sel_sort(arr2,5);
    display(arr2,5);
    
    return 0;
}