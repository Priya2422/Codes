#include <stdio.h>
void rotate(int arr[], int n);
int main()
{

        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
        return 0;
}
void rotate(int arr[], int n)
{
    if(n==1){}
    else{
        int i=0,j=n-1,k=n-2;
    int a=arr[j];
    while(k!=0){
        arr[j]=arr[k];
        j--;
        k--;
    }
    arr[j]=arr[k];
    arr[0]=a;
    }
}