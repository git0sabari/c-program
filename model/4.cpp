#include <stdio.h>   
int main()  
{  
    int num, i, j, k = 1;   
    printf( " Enter the number of rows: \n");  
    scanf( "%d", &num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf(" %d ", k++); 
        }  
        printf( "\n");  
    }     
     return 0;  
}  

