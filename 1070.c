#include <stdio.h>
 
int main() {
 
    int i, a;
    
    scanf("%d", &a);
    
    for (i = a; i < i + 6; i++) {
    	if (i % 2 == 1) {
    		printf("%d\n", i);
		}
	}
 
    return 0;
}
