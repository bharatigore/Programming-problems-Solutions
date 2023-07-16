///aceept N numbers from user and return difference betwweem summation of 
//even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] ,int iLength)
{
    int iCnt = 0;
    int iEvenSum=0;
    int iOddSum=0;
    int iDiff=0;
    
    

    for(iCnt = 0;iCnt<=iLength;iCnt++);
    {
        if((Arr[iCnt] % 2)==0)
        {
            iEvenSum=iEvenSum+Arr[iCnt];
        }
        else
        {
            iOddSum=iOddSum+Arr[iCnt];
        }
        iDiff=iEvenSum - iOddSum;
    }
    return iDiff;


}/*
int main()
{
    int iSize = 0,iRet= 0,iCnt=0,iLength;
    int *p=NULL;

    printf("enter number of elements ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p== NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    for(iCnt = 0;iLength;iCnt++)
    {
        printf("enter elements : %d",iCnt);
        scanf("%d",&p[iCnt]);
    }

    iRet=Difference(p,iSize);

    printf("REsult is %d",iRet);

    free(p);
    return 0;
}
*/
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int  iRet = 0;

    printf("enter number of elements : \n");
    scanf("%d",&iSize);

    ptr  =(int *)malloc(iSize * sizeof(int));

    printf("enter the elemnts : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    iRet=Difference(ptr,iSize);

    printf("result is %d",iRet);

    free(ptr);
    return 0;
}

