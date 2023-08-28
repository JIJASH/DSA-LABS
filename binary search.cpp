#include<stdio.h>
int BinarySearch(int array[], int start_index, int end_index, int key){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == key)
         return middle;
      if (array[middle] < key)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
   //int array[] = {1, 4, 7, 9, 16, 56, 70};
   //int n = 7;
   //int element = 16;
   int array[50],key,n;
   printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
		for(int i=0;i<n;i++){
			scanf("%d",&array[i]);
		}
	printf("Enter the key : ");
	scanf("%d",&key);
   int found_index = BinarySearch(array, 0, n-1, key);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
