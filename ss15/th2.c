#include<stdio.h>

struct DiemThi{
	int maSV;
	float diemToan;
	float diemVan;
};

int main(){
	struct DiemThi dsDiemThi[5];
	int i;
	for(i=0;i<5;i++){
		printf("Nhap ma sinh vien: ");
		scanf("%d",&dsDiemThi[i].maSV);
		printf("Nhap diem toan: ");
		scanf("%f",&dsDiemThi[i].diemToan);
		printf("Nhap diem van: ");
		scanf("%f",&dsDiemThi[i].diemVan);
	}
}
