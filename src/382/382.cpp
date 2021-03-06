/*
 * Sai Cheemalapati
 * UVA 382: Perfection
 *
 */

#include<cstdio>

int n;

int pda(int n) {
	int sum = 0;
	for(int i = 1; i <= n / 2; i++) {
		if(n % i == 0) sum += i;
	}
	return sum - n;
}

int main() {
	printf("PERFECTION OUTPUT\n");
	for(;;) {
		scanf("%d", &n);
		if(n == 0) break;
		int d = pda(n);
		printf("%5d  %s\n", n, d == 0? "PERFECT" : d > 0? "ABUNDANT" : "DEFICIENT");
	}
	printf("END OF OUTPUT\n");
}
