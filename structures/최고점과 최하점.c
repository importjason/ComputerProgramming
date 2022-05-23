#include <stdio.h>

struct student {
	char name[20];
  int score;
};

int main()
{
	struct student stu[5];

  int max, min = 1;

	for (int i = 1; i < 6; i++) {
		printf("%d 번째 학생의 이름을 입력하시오: ", i);
		scanf("%s", stu[i].name);
		printf("%d 번 학생의 기말고사 성적을 입력하시오: ", i);
		scanf("%d", &stu[i].score);
	}

  for ( int i = 2; i < 6; i++) {
    if (stu[max].score < stu[i].score) {
      max = i;
    } 
    if (stu[min].score > stu[i].score) {
      min = i;
    } 
  }

	printf("성적이 가장 우수한 학생은 %s이며, 점수는%d 입니다. 성적이 가장 낮은 학생은 %s이며, 점수는 %d 입니다.",stu[max].name,stu[max].score,stu[min].name,stu[min].score);
  
}
