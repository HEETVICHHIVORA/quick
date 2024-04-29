#include<iostream> 
#include<vector>
using namespace std ;
void quicksort(vector<int> &arr,int s, int e ){
    if(s>=e){
        return ;
    }
    int pivot=e;
    int j=s;
    int i=s-1;
    while(j<e){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quicksort(arr,s,i-1);
    quicksort(arr,i+1,e);
}
int main (){
    vector<int> arr={10,9,8,7,6,5,4,3,2,1};
    int s =0 ;
    int e= arr.size()-1;
    quicksort(arr,s,e);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0 ;
}