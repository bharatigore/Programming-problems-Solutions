//accept N numbers from user and Display all such elements
//which are multiples of 11

#include<stdio.h>

void Display(int Arr[] ,int iLength)
{


}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter elements : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p iSize);
    free(p);

    return 0;
}