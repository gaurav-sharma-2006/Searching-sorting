#include<stdio.h>
int print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
} 
int partition(int arr[],int p,int q){
    int x=arr[p];
    int i=p;
    int temp;
    for(int j=p+1;j<=q;j++){
        if(arr[j]<=x){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i];
    arr[i]=arr[p];
    arr[p]=temp;
    return i;
}
int Quick_sort(int arr[],int p,int q){
    if(p<q){
        int partitionindex=partition(arr,p,q);
        Quick_sort(arr,p,partitionindex-1);
        Quick_sort(arr,partitionindex+1,q);
    }
}
int main(){
    int arr[5]={5,9,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    Quick_sort(arr,0,n-1);
    print_array(arr,n);
}