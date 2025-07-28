#include <stdio.h>


void read1(int arr[], int n) {
	int i;
	printf("Enter %d elements : ",n);
	for(int i =0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
}
int linearSearch(int *arr, int start, int end, int key) {
	for(int i = start;i <=end;i++){
		if(arr[i] == key){
			return i;
			
		}
	}
	return -1;
}
