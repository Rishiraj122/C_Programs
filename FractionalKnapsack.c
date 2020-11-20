#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high, int b[])
{
    int i=low-1;
    int pivot=arr[high];

    for (int j=low;j<=high;j=j+1) {
        if (arr[j]<pivot) {
            i=i+1;
            swap(&arr[i], &arr[j]);
            swap(&b[i], &b[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    swap(&b[i+1], &b[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high,int b[])
{
    if (low<high) {
        int P=partition(arr, low, high,b);
        quicksort(arr, low, P-1,b);
        quicksort(arr, P+1, high,b);
    }
}

//int returnVal(int val, int arr[], int b[], int n) {

  //  for (int i=0;i<n;i=i+1) {
    //    if (arr[i]==val) {
      //      return b[i];
        //}
    //}

//}

int main()
{
    int n, w, *arr, *b, k=0, j=0, *c, testcases;
    float sum=0;

    scanf("%d", &testcases);

    while (testcases--) {

        scanf("%d %d", &n, &w);

        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);
        c=(int*)malloc(sizeof(int)*n);

        for (int i=0;i<n*2;i=i+1) {
            if (i%2!=0) {
                scanf("%d", &arr[k++]);
            }
            else {
                scanf("%d", &b[j++]);
            }
        }

        for (int i=0;i<n;i=i+1) {
            c[i]=arr[i];
        }

        quicksort(c, 0, n-1,b);

        printf("\n");

        for(int i=0;i<n;i=i+1){
            printf("%d ",arr[i]);
        }

        printf("\nweights b: \n");

        for(int i=0;i<n;i=i+1){
            printf("%d ",b[i]);
        }

        printf("\nvalue c: \n");

                for(int i=0;i<n;i=i+1){
            printf("%d ",c[i]);
        }

        printf("\n");

        for (int i=0;i<n;i=i+1) {
            if (c[i]<=w) {
                w=w-c[i];
                sum=sum+b[i];
            }
            else if (c[i]>w && w>0) {
                printf("\nError line: %d %d %d %d\n",i,c[i],b[i],w);
                double x=((double)w/c[i])*b[i];
                printf("\nError line:%f %f\n",x,sum);
                sum=sum+x;
                w=w-x;
            }
        }

        printf("%.2f\n", sum);
        sum=0;
        k=0;
        j=0;
    }

    return 0;
}
