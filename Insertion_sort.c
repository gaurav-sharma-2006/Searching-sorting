#include<stdio.h>
int print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[5]={8,5,6,9,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,n);
    insertion_sort(arr,n);
    print_arr(arr,n);
}