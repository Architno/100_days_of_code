 #include <stdio.h>

int main(){
	int number;
    printf("Enter the number: ");
	scanf("%d", &number);

	if (number == 0) {
		printf("0 has infinitely many factors\n");
		return 0;
	}

	if (number < 0)
		number = -number;

	for (int factor = 1; factor <= number; factor++) {
		if (number % factor == 0)
			printf("%d,", factor);
	}

	printf("\n");
	return 0;
}
