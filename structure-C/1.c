#include<stdio.h>

struct student{
	int id;
	char name[25],father[25],mother[25],surname[25],gfather[25];
	char dob[11],study[100],scon[20],fcon[20],mcon[20];
	char bloodgroup[5],email[50],address[100],gender[10];
	char country[25],religion[25],nationality[25],foccupation[50],moccupation[50];
};

void main(){
	
	struct student s1;
	
	s1.id = 7043;
	strcpy(s1.dob,"28-02-2006");
	strcpy(s1.bloodgroup,"O-");
	strcpy(s1.name,"Saurabh");
	strcpy(s1.scon,"+91 635 472 9554");
	strcpy(s1.gender,"Male");
	strcpy(s1.father,"Sureshbhai");
	strcpy(s1.fcon,"+91 873 567 2465");
	strcpy(s1.foccupation,"Accountant");
	strcpy(s1.mother,"Chetanaben");
	strcpy(s1.mcon,"+91 632 574 5294");
	strcpy(s1.moccupation,"Housewife");
	strcpy(s1.surname,"Kachhadiya");
	strcpy(s1.gfather,"Chhaganbhai");
	strcpy(s1.email,"saurabhkachhadiya890@gmail.com");
	strcpy(s1.study,"Full-Stack Development , Diploma Computer Engineering");
	strcpy(s1.address,"408, Shivam comp., setelite road, Mota varachha, Surat.");
	strcpy(s1.country,"India");
	strcpy(s1.religion,"Hindu");
	strcpy(s1.nationality,"Indian");
	
	printf("\nGR ID : %d\n\n",s1.id);
	printf("Student Name  : %s %s %s\n",s1.name,s1.father,s1.surname);
	printf("Mobile no.    : %s\n",s1.scon);
	printf("Date of Birth : %s\n",s1.dob);
	printf("Blood group   : %s\n",s1.bloodgroup);
	printf("Gender        : %s\n",s1.gender);
	printf("E-mail ID     : %s\n",s1.email);
	printf("Course        : %s\n",s1.study);
	printf("Country       : %s\n",s1.country);
	printf("Religion      : %s\n",s1.religion);
	printf("Nationality   : %s\n",s1.nationality);
	printf("Address       : %s\n\n",s1.address);
	
	printf("Father Name   : %s %s %s\n",s1.father,s1.gfather,s1.surname);
	printf("Mobile no.    : %s\n",s1.fcon);
	printf("Occupation    : %s\n\n",s1.foccupation);
	
	printf("Mother Name   : %s %s %s\n",s1.mother,s1.father,s1.surname);
	printf("Mobile no.    : %s\n",s1.mcon);
	printf("Occupation    : %s\n\n",s1.moccupation);
	
}
