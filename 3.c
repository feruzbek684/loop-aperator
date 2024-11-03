#include <stdio.h>

int main (){
	
		int son, q = 0, w = 5, e = 0;
		while (q < w){
			scanf("%d",&son);
			if ( son > e){
				e = son ;
			}
	    q ++;
		}
		
	printf("Katta son %d",e);
	return 0;	
	
}