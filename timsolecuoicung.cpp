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
	int t = 0;
	for (int i = n -1; i > 0; i--) {  
		if ( a[i] >= 0) {
			if ( a[i]%2 == 1) {
				 t += a[i];
				 break;
			}
		} else {
			a[i] = 0 - a[i];
			if ( a[i]%2 == 1) {
				 t -= a[i];
				 break;
			}
		}
		}
		if ( t == 0) { printf ( " khong co so le trong mang");
	} else {
		printf ( "so le cuoi cung la %d \n", t);
	}
		

	return 0;
}
