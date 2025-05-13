#include<stdio.h>
#include<stdlib.h>

int main () {

	float exam_1, exam_2, exam_3, project_note;

	printf("Exam Note 1:");
	scanf("%f", &exam_1);

	printf("Exam Note 2:");
	scanf("%f", &exam_2);

	printf("Exam Note 3:");
	scanf("%f", &exam_3);

	printf("Project Note:");
	scanf("%f", &project_note);

	printf("GPA of Student: %f", (exam_1 + exam_2 + exam_3 + project_note)/3 );
}
