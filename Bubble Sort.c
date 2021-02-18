#include<stdio.h>
int main()
{
    int n,i,j,t,*p;
    printf("Enter Limit of Array :\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    free(p);
    p=NULL;
    return 0;
}
