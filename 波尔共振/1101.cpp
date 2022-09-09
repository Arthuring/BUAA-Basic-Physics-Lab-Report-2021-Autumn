#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define ULL unsigned long long
#define LL long long
#define PI acos(-1)
#define eps 1E-6
#define elementype int
#define kong -1

int main(){
		double data[100];
		double ln[100];
		double dy[100];
		double sum = 0;
		double yb=0;
		double b = 0;
		double Uay = 0; 
		double Ub = 0;
		int i;
		double sum1 = 0;
		double beita = 0;
		double sum2;
		for( i=0;i<10;i++){
			scanf("%lf",&data[i]);
		} 
		for( i=0;i<10;i++){
			ln[i] = log(data[i]);
		}
		for( i=0;i<5;i++){
			dy[i]=ln[i+5]-ln[i];
		}
	for(int i=0;i<5;i++){
		sum += dy[i];
	}
	yb = sum/(double)5;
	b = yb/(double)5;
	for(i=0;i<5;i++){
		sum1 += (dy[i] - yb) * (dy[i] - yb);
	}
	
	Uay = sqrt(sum1/20);
	beita = sqrt((Uay/yb)*(Uay/yb));
	Ub = b*sqrt((Uay/yb)*(Uay/yb));
	for(i = 0;i<10;i++){
			printf("%d : %.4f\n",i,ln[i]);
	}
	for(i=0;i<5;i++){
		printf("%.4f ",dy[i]);
	}
	printf("average y: %.4f\n",yb);
	printf("b : %.4f ",b);
	printf("Uay : %.4f ",Uay);
	
	printf("Ub : %.5f",Ub);
	printf("beita : %.5f",beita);
	return 0;
}

