#include<stdio.h>
int linear_search(int arr[],int n,int element){
    for(int i=0;i<=n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,5,2,6,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter Element to be search for:-");
    scanf("%d",&element);

    int result=linear_search(arr,n,element);

    if(result==-1){
        printf("Element not inthe array\n");
    }
    else{
        printf("Position of element is %d\n",result);
    }
}