#include <stdio.h>

int main ( ) {
	//freopen("input.txt", "r", stdin);
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int S = 0;
	int max = 0;
	
	for (int i = 0; i < n; i++) {  
	  
	  if ( a[i] > 0) {
	  	S+= a[i];
	  	if ( max < S) {
	  		max = S;
		  }
		 }
		  else {
		  	S = 0;
		  }}

		printf ( " tong chuoi   so duong  lon nhat  la %d \n", max);

	return 0;
}
