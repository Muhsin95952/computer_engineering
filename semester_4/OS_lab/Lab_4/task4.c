#include <stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int id;

	};

	struct student s1, s2, s3;
	printf("Please enter name and ID of the students \n");
	scanf("%s %d", s1.name, &s1.id);
	scanf("%s %d", s2.name, &s2.id);
	scanf("%s %d", s3.name, &s3.id);

	printf("\nThe detail of the students are: \n");
	printf("%s \t\t %d", s1.name, s1.id);
	printf("\n %s \t\t %d", s2.name, s2.id);
	printf("\n %s \t\t %d \n", s3.name, s3.id);

return 0;
}
