#include<stdio.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;	
	};


int main(){
	struct Student student1;
	student1.age =22;
	student1.gpa =3.2;
	strcpy( student1.name, "Jim");
	strcpy( student1.major, "Business");
	
		struct Student student2;
	student2.age =20;
	student2.gpa =3.9;
	strcpy( student2.name, "Ali");
	strcpy( student2.major, "art");
	
	printf("%s", student2.name);
	
	
	
	return 0;
}
