int main(void)
{
    // Declare variables
    int age, currentYear;
	// ask age and current year
	printf ("Type your age\n");
	scanf("%d", &age);
	printf ("Type current year in four digit numbers\n");
	scanf("%d", &currentYear);
	printf ("You are born in %d\n", currentYear-age);
	return 0;
}

/*
int main(void)
{
    // Declare variables
    int age, currentYear;
	// ask age and current year
	printf ("Type your age\n");
	age=getchar();
	putchar(age);
	printf ("Type current year in four digit numbers\n");
	currentYear=getchar();
	printf ("You are born in %d\n", currentYear-age);
	return 0;
}
*/
