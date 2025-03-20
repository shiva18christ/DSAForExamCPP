#include<iostream>
using namespace std;
class MergeSort{
    public:
    void mergeSort(int arr[],int left,int right){
        if(left<right){
            int mid=left+(right-left)/2;
            mergeSort(arr,left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);

        }
    }
    void merge(int arr[],int left,int mid,int right){
        int n=mid-left+1;
        int m=right-mid;
        int leftarr[n];
        int rightarr[m];
        for(int i=0;i<n;i++){
            leftarr[i]=arr[left+i];
        }
        for(int j=0;j<m;j++){
            rightarr[j]=arr[mid+1+j];
        }
        int i=0;int j=0;int k=left;
        while(i<n && j<m){
            if(leftarr[i]<rightarr[j]){
                arr[k]=leftarr[i];
                i++;
            }else{
                arr[k]=rightarr[j];
                j++;
            }
            k++;
        }
        while(i<n){
            arr[k]=leftarr[i];
            i++;
            k++;
        }
        while(j<m){
            arr[k]=rightarr[j];
            j++;
            k++;
        }
    }
};
int main(){
    MergeSort sort;
    int arr[]={15,12,34,6,89,56};
    sort.mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}