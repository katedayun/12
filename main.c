#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[100];
	float score;
};

int main(int argc, char *argv[]) {
	struct student s1 = {123, "Kate",4};
	//different value
	s1.ID=123456;
	s1.name[0]='c';
	s1.score=0.3;
	
	//printing out
	printf("ID : %i\n",s1.ID);
	printf("name:%s\n",s1.name);
	printf("grade:%f\n",s1.score);
	
	strcpy(s1.name,"dayun");
	printf("name2:%s\n");
	
	return 0;
}
