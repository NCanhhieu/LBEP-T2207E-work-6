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
	int bodem = 0;
	int contro = 0;
	for (int i = 0; i < n; i++) {  
	  if ( a[i] >= 0) {
	  for (int j = i+1; j < n; j++) {  
	     bodem++;
		if ( a[j] < 0 ){
		    if ( contro < bodem) {
				contro = bodem;}
				bodem = 0;
		    	break;					
			}
		if ( j == n-1) {
			if ( a[j] >= 0) {
			 if ( contro < bodem) {
		    	contro = ( bodem +1 );}
		    	bodem =0; 
		    	break;
		    } }
		}
	  } 
	  if ( i == n-1 )  {
			if ( a[i] >= 0) {
			 if ( contro <= bodem) {
		    	contro = ( bodem +1 );}
		    	bodem =0; 
		    	break;
		    } }
	
}
      
		printf ( "so luong cac so duong lien ke lon nhat  la %d \n", contro);

	return 0;
}
