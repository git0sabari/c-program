#include <stdio.h>
void swap(int *ptr1, int *ptr2) 
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main() 
{
    int ptr1 = 5, ptr2 = 10;
    swap(&ptr1, &ptr2);
    printf("After swapping: ptr1 = %d, ptr2 = %d\n", ptr1, ptr2);
    return 0;
}

