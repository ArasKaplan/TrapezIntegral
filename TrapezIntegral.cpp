#include<stdio.h>
#include<math.h>
#include <cstdlib>

double Fonksiyon_deger_bul(double x,double fonksiyon[100],int n){
	int i;
	int j;
	double deger;
	deger=0;
	double z;
	for(i=0;i<=n;i++){
		z=1;
		for(j=0;j<i;j++){
			z=z*x;
		}
		deger=deger+z*fonksiyon[i];
	}
	return deger;
}
int main(){
	double x1,x2;
	int n;
	printf("x1 degerini giriniz");
	scanf("%lf",&x1);
	printf("x2 degerini giriniz");
	scanf("%lf",&x2);
	printf("N degeri giriniz");
	scanf("%d",&n);
	int derece;
	printf("Fonksiyonun derecesini giriniz");
	scanf("%d",&derece);
	double fonksiyon[100];
	int i;
	for(i=0;i<=derece;i++){
		printf("Fonksiyonun x^%d elemaninin katsayini giriniz",i);
		scanf("%lf",&fonksiyon[i]);
	}
	double h;
	double integral=0;
	h=(x2-x1)/n;
	integral=(Fonksiyon_deger_bul(x1,fonksiyon,derece)+Fonksiyon_deger_bul(x2,fonksiyon,derece))/2;
	for(i=1;i<n;i++){
		integral=integral+Fonksiyon_deger_bul(x1+(i*h),fonksiyon,derece);
	}
	integral=integral*h;
	printf("%lf",integral);
	system("pause");
}
