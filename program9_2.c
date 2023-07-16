// accept N numbers from user and display all such elements which are
//divisible by 5

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
    int iNo;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    if((iNo % 5) == 0   )
    {
        iNo++;
    }
}
int main()          
{
    int iSize = 0,iRet=0;
    int iLength =0;  
    int *p = NULL;
    int iCnt = 0;   

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);   

    p = (int *)malloc(iSize * sizeof(int));
    if(p==NULL)
    {

        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter the elements : %d\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("enter elements: %d",iCnt+1);
        scanf("%d",p[iCnt]);
    }
    
    
    Display(p,iSize);    
    free(p);

    return 0;       
}