#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	double h,v,t,x,aci,ac,g=9.81;
	
	printf("\nTop mermisinin toptan cikis hizi kac m/sn?\n");
	scanf("%lf",&v);

printf("Hedef ne kadar uzakta x.m.?\n");
scanf("%lf",&x);

printf("Hedef ne kadar yuksekte h.m. ?\n");
scanf("%lf",&h);

ac=sqrt((h*2*g)/(v*v));

aci=asin(ac)*38.19719428875551;

t=x/(v*cos(aci));

if(aci<=0){
	
printf("O hýzla hedefi vuramazsýnýz");

}

else {
	
printf("Girilen degerlerde hedefi vurmak icin =%lf derece  aciyla atmalisiniz,\n hedefe varis suresi=%lf saniyedir",aci,t);
}

	return 0;
}
