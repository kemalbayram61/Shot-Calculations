#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		double v,hm,t,g;
	
	Printf("V0 hizini girin:\n");
	
	scanf("%d",&v);
	
		Printf("G yer�ekim ivmesini girin:\n");
		
	scanf("%d",&g);
	
	
	t=v/g;
	
	hm=(g*t*t)/2;
	
	Printf("HMaxa ��kma s�resi=%d HMax de�eri=%d",t,hm);
	
	return 0;
}
