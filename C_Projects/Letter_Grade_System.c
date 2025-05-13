#include<stdio.h>
#include<stdlib.h>

int main () {

	float exam_1, exam_2, exam_3, project_note, point_average;

		printf("Exam Note 1:");
		scanf("%f", &exam_1);

		printf("Exam Note 2:");
		scanf("%f", &exam_2);

		printf("Exam Note 3:");
		scanf("%f", &exam_3);

		printf("Project Note:");
		scanf("%f", &project_note);

		point_average = (exam_1 + exam_2 + exam_3 + project_note)/4;

		if(point_average<50)
		{printf("Your Letter Grade Is FF");}
		if(50<=point_average && point_average<60)
		{printf("Your Letter Grade Is DD");}
		if(60<=point_average && point_average<70)
		{printf("Your Letter Grade Is CC");}
		if(70<=point_average && point_average<85)
		{printf("Your Letter Grade Is BB");}
		if(85<=point_average)
		{printf("Your Letter Grade Is AA");}
}
