#include<stdio.h>
int binary_search(int arr[],int l,int r,int element){
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==element){
            return m;
        }
        else if(arr[m]<element){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter element to be search for:-");
    scanf("%d",&element);

    int result=binary_search(arr,0,n-1,element);

    if(result==-1){
        printf("Element not in the array\n");
    }
    else{
        printf("Position of element in the array is %d\n",result);
    }
}