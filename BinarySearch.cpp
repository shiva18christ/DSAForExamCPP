#include<iostream>
using namespace std;
class BinarySearch{
    public:
     int search(int array[],int target,int size){
        int start=0;
        int end=size-1;
        while(start<=end){
           int mid=start+(end-start)/2;
           if(array[mid]<target){
            start=mid+1;
           }
           else if(array[mid]>target){
            end=mid-1;
           }
          else  if(array[mid]==target){
            return mid;
           }
        }
        return -1;
    }
};
int main(){
    BinarySearch search;
    int array[]={10,20,35,76,98};
    int target=76;
    int size=5;
    int result=search.search(array,target,size);
    cout<<result;

}