#include<stdio.h>
#include<string.h>

struct Student{
	char fullName[50];
	int age;
	char phoneNumber[15];
	char email[50];
};

int main(){
	struct Student s;
	strcpy(s.fullName,"Tran My Tam");
	s.age = 18;
	strcpy(s.phoneNumber,"0982384855");
	strcpy(s.email,"tamtran252@gmail.com");
	printf("Thong tin sinh vien:\n");
	printf("Ho va ten: %s\n",s.fullName);
	printf("Tuoi: %d\n",s.age);
	printf("SDT: %s\n",s.phoneNumber);
	printf("Email: %s\n",s.email);
	return 0;
}
