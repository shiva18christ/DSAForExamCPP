#include<iostream>
using namespace std;
class BubbleSort{
   public :
   void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }

        }
    }
   }
};
int main(){
    BubbleSort sort;
    int arr[]={76,55,33,87,99,2,13,45};
    int n=8;
    cout<<"original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    sort.bubbleSort(arr,n);
    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}