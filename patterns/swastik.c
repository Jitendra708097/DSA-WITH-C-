#include <stdio.h>

int main() {
    int i,j,n;
    
    printf("Enter the numbers of astriks you want in each side of your swastik\n ");
    scanf("%d",&n);
    
    int span=2*n-1;
    
    int arr[span][span];
    
    for(i=1;i<=span;i++)
    {
        for(j=1;j<=span;j++)
        {
           if((i==(span+1)/2  || j==(span+1)/2) || (i<=(span+1)/2 && j==1) || (i>=(span+1)/2 && j==span ) || (j<=(span+1)/2) && (i==span) || (j>=(span+1)/2 && i==1) || i==(n+1)/2 && j==(n+1)/2 || i==span-((n-1)/2) && j==(n+1)/2 || j==span-((n-1)/2) && i==(n+1)/2 || j==span-((n-1)/2) && i==span-((n-1)/2))
            {
               printf(" *");
            } 
           else
            {
                printf("  ");
            }
            
            
        }
        printf("\n");
    }
    return 0;
}