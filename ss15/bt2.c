#include<stdio.h>
#include<string.h>

struct Student{
	char fullName[50];
	int age;
	char phoneNumber[15];
	char email[50];
};

void inputStudent(struct Student *sv){
	printf("Nhap ho va ten sinh vien:");
	fgets(sv->fullName,sizeof(sv->fullName),stdin);
	sv->fullName[strcspn(sv->fullName, "\n")] = 0;
	printf("Nhap tuoi: ");
	scanf("%d",&sv->age);
	while((getchar()!='\n'));
	printf("Nhap so dien thoai: ");
	fgets(sv->phoneNumber,sizeof(sv->phoneNumber),stdin);
	sv->phoneNumber[strcspn(sv->phoneNumber, "\n")] = 0;
	printf("Nhap email: ");
	fgets(sv->email,sizeof(sv->email),stdin);
	sv->email[strcspn(sv->email, "\n")] = 0;
}

void outputStudent(struct Student *sv){
	printf("Thong tin sinh vien:\n");
	printf("Ho va ten: %s\n",sv->fullName);
	printf("Tuoi: %d\n",sv->age);
	printf("SDT: %s\n",sv->phoneNumber);
	printf("Email: %s\n",sv->email);
}

int main(){
	struct Student sv;
	inputStudent(&sv);
	outputStudent(&sv);
}
