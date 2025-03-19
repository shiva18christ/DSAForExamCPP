#include<iostream>
using namespace std;
class SelectionSort{
    public:
    void selectionSort(int arr[],int size){
        for(int i=0;i<size;i++){
            int last=size-1-i;
            int max=getMax(arr,0,last);
            swap(arr,max,last);
        }

    }
    int getMax(int arr[],int start,int end){
        int max=start;
        for(int i=start;i<=end;i++){
            if(arr[max]<arr[i]){
                max=i;
            }

        }
        return max;
    }
    void swap(int arr[],int max,int last){
        int temp=arr[last];
        arr[last]=arr[max];
        arr[max]=temp;
    }

};
int main (){
    SelectionSort sort;
    int arr[]={22,56,78,23,12,67};
    int size=6;
    sort.selectionSort(arr,size);
    cout<<"Sorted array:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}