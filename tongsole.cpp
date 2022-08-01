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
	int S = 0; 
	float t = 0;
	for (int i = 0; i < n; i++) {  
	if ( a[i] > 0) { 
		if ( a[i]%2 == 1 ) {       	
			S += a[i];    
			t++;   
		}
	} 
	else {
		a[i] = 0 - a[i];
		if ( a[i]%2 == 1 ) {     	
			S -= a[i];    
			t++;   
		}
	}
	}
	float tbc;
	tbc = S/t;
	
	printf (" tbc so le trong mang  %d la  %f \n", n, tbc);
	return 0;
}
