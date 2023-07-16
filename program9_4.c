//accept n numbers from user and display all such elements which are  
//are  divisible by 3 and  5


#include<stdio.h>

void Display(int Arr[],int iLength)
{
    int iNo=0;

     int iNo;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    if(((iNo % 3) ==0) && ((iNo %5) ==0)  )
    {
        iNo++;
    }
    


}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocte memory");
        return -1;
    }
    printf("enter %d elements ",iLength);

    for (iCnt<iLength;iCnt++)
    {

        printf("Enter elements :%d",iCnt+1)
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);

    return 0;
}