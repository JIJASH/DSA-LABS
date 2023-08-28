#include <stdio.h> 

int LINEAR_SEARCH(int inp_arr[], int size, int val) 
{ 
	 
	for (int i = 0; i < size; i++) 
		if (inp_arr[i] == val) 
			return i; 
	return -1; 
} 


int main(void) 
{ 
	//int arr[] = { 10, 20, 30, 40, 50, 100, 0 }; 
	//int key = 100; 
	int size,key,arr[50];
	printf("Enter the number of elements : ");
	scanf("%d",&size);
	printf("Enter the key : ");
	scanf("%d",&key);
	printf("Enter the elements : ");
		for(int i=0;i<size;i++){
			scanf("%d",&arr[i]);
		}
	int res = LINEAR_SEARCH(arr, size, key); 
	if (res == -1)
	printf("ELEMENT NOT FOUND!!");
    else
    printf("Item is present at index %d", res);
    
	return 0; 
}
