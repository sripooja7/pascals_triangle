/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,row,col,space,count,k=0;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        count=1;
        if(row==1&&row==n-row)
         printf("1 ");

        for(space=n-row;space>0;space--)
        {
            printf(" ");
        }
        k=count;
        for(col=0;col<=row;col++)
        {
            
         printf("%d ",count);
         count=(count*(row-col))/(col+1);
            
        }
        //count=count+k;
        printf("\n");
    }
    return 0;
}
