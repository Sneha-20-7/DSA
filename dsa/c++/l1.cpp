#include<stdio.h>
#include<stdlib.h>

void d (int[],int);
void insert (int[],int);
void create (int[],int);
int main(){
    int a[10],n,i,ch;
    printf("Enter the value:");
    scanf("%d",&n);
    while(1)
    {
        printf("\n Enter your choice: \n 0.Exit\n 1.Create \n 2.Insert \n 3.delete \n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 0 :exit(0);
            case 1 :create(a,n);
                    break;
            case 2 :insert(a,n);
                    break;
            case 3 :d(a,n);
                    break;
            default:printf("wrong choice");
            

        }

    }
}
void create (int a[], int n){
    int i;
    printf("enter the element: ");
    for(i=1;i<n;i++)
    scanf("%d", &a[i]);

}
void insert (int a[], int n){
    int i,t,k,h;
    printf("enter the position and element: ");
    scanf("%d %d", &k,&t);
    for(i=n;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k] = t;
    h = n+1 ;
    printf("\n after insertion :\n");
    for(i=1; i<n ; i++){
        printf("%d", a[i]);

    }
}
void d(int a[], int n){
    int i,k;
    printf("enter the position ");
    scanf("%d ", &k);
    for(i=k;i>=n;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\n after deletion :\n");
    for(i=1; i<n ; i++){
        printf("%d", a[i]);

    }
}