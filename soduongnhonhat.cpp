#include <stdio.h>

int main ( ) {
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int min = 0;
	for (int i = 1; i < n; i++) {  
		if ( a[i] > 0 ){
		
			min = a[i];
			break;
			}
		} 
	for (int i = 0; i < n; i++) {  
		if ( a[i] < min && a[i] > 0 ){
		
			min = a[i];
			}
		} 
		if ( min = 0) { printf ( " khong co so duong trong mang");
	} else {
		printf ( "so duong nho nhat  la %d \n", min);
	}
		

	return 0;
}
