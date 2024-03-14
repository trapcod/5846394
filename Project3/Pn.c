#include <stdio.h>
#include <stdlib.h>

int main(void) {	
	int result = 0;
	int k = 0;
	for (int i = 2; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) break;
		}
		if (k == i) 
			result += k;
	}
	printf("0부터 100까지의 소수의 합 : %d", result);
}