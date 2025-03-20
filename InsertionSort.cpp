#include<iostream>
using namespace std;
class InsertionSort{
    public:
    void insertionSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr,j,j-1);
                }else{
                    break;
                }
            }
        }

    }
    void swap(int arr[],int a,int b){
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
};
int main(){
    InsertionSort sort;
    int arr[]={34,22,45,12,67,4,31};
    int n=7;
    sort.insertionSort(arr,7);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}