#include<stdio.h>
void builtheap(int a[],int n,int i);
void display(int a[],int n)
{

    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n;
    printf("\nEnter the size of an array :: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements in the array:: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nNormal Array :: ");
    display(a,n);
    for(int i=n/2;i>=0;i--)
    {
        builtheap(a,n,i);
    }
    printf("\nHeap :: ");
    display(a,n);

return 0;
}

void builtheap(int a[],int n,int i)
{
    int largest=i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && a[l]>a[largest])
        largest =l;
    if(r<n && a[r]>a[largest])
        largest=r;
    if(largest !=i)
    {
        int temp =a[i];
        a[i] = a[largest];
        a[largest]=temp;
        builtheap(a,n,largest);
    }
}
