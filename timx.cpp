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
	printf ( " nhap x  :  \n") ;	
	int x;
	scanf("%d", &x);
	int t=0;
	for (int i = 0; i < n; i++) {  
		
		if ( a[i]  == x ) {      // dieu kien tim x
			printf( " co %d trong mang,  vi tri   la  %d \n", x,i);   
			t++;   
			break;
		}
		}
	if ( t == 0) { printf (" khong co %d trong mang \n", x);
	}
	return 0;
}
