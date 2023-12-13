#include<stdio.h>
int print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int indexofmin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexofmin]){
                indexofmin=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[indexofmin];
        arr[indexofmin]=temp;
    }
}
int main(){
    int arr[5]={8,9,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    insertion_sort(arr,n);
    print_array(arr,n);
}