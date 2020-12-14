# include <stdio.h>
# include <math.h>
int main(void)
{
	int sum,n,sancengercengcha,a1 = 9 , d = 9;
	sancengercengcha = 729;
	n = sqrt(1.0*(sancengercengcha/d));
	sum = (3 * n*(a1 + a1 +(3 * n - 1)*d))/2;
	printf("%d",sum);
	return 0;
}
