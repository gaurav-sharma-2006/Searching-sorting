#include<stdio.h>
int bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[5]={9,3,6,5,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    bubble_sort(arr,n);
    printf("\n");
    printf("After sorting:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}