# include <stdio.h>

int main(void){
	int sum = 0;
	double a,b,c,d;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	for(double i = -100;i<=100;i += 0.001){
		double j = i + 0.001;
		double y1 = a*i*i*i + b*i*i + c*i + d;
		double y2 = a*j*j*j + b*j*j + c*j + d;
		if(y1*y2<0){
			double x = (i + j)/2;
			printf("%0.2lf ",x);
			sum++;
		}
		if(sum>3){
			break;
		}
	}
	return 0;
} 
