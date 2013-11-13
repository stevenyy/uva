/*
 * Sai Cheemalapati
 * UVa 10924: Prime words
 *
 */

#include<cstdio>
#include<cstring>

int L;
char s[25];

void is_prime(int sum) {
	for(int i = 2; i <= sum / 2; i++) {
		if(sum % i == 0) {
			printf("It is not a prime word.\n");
			return;
		}
	}
	printf("It is a prime word.\n");
}

int main() {
	while(gets(s)) {
		L = strlen(s);
		int sum = 0;
		for(int i = 0; i < L; i++) {
			if(s[i] >= 'a' && s[i] <= 'z')
				sum += s[i] - 'a' + 1;
			else
				sum += s[i] - 'A' + 27;
		}
		is_prime(sum);
	}
}
