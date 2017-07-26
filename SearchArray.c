#include <stdio.h>
int main()
{
    int array[20];
    int i,low,mid,high,key,size;
 
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    while(size>20||size<0)
    {
    	printf("\nERROR...  The range for elements is 1 to 20");
		printf("\nEnter the total number of elements again : ");
       	scanf("%d",&size);
	}
    printf("\n");
    
    printf("Enter the array elements : \n");
    for (i = 0; i < size; i++)
    {
    	printf("Enter the %d element : ",i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n\nEnter the key :  ");
    scanf("%d", &key);
    
	low = 0;
    high = (size - 1);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == array[mid])
        {
            printf("\nSUCCESSFUL SEARCH\n");
            return 0;
        }
        if (key < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("\nUNSUCCESSFUL SEARCH\n");
}
