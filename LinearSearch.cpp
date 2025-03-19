#include<iostream>
using namespace std;
class LinearSearch{
    public:
    int Search(int arr[],int target,int size){
        for(int i=0;i<size;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    LinearSearch search;
    int array[]={10,20,30,40};
    int size=4;
    cout<<"Enter the elemenet you want to search ";
    int target;
    cin>>target;
    int result=search.Search(array,target,size);
    cout<<result;
}