#include <stdio.h>

struct student {
	char id[20], name[10], dept[20];
};

int main()
{
	struct student hi[3];

	for (int i = 0; i < 3; i++) {
		printf("%d 번 학생의 학번을 입력해주세요 : ", i + 1);
		scanf_s("%s", hi[i].id,sizeof(hi[i].id));
		printf("%d 번 학생의 학과를 입력해주세요 : ", i + 1);
		scanf_s("%s", hi[i].dept, sizeof(hi[i].dept));
		printf("%d 번 학생의 이름을 입력해주세요 : ", i + 1);
		scanf_s("%s", hi[i].name, sizeof(hi[i].name));
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번 학생의 학번 : %s, 학과 : %s, 이름 : %s\n", i + 1, hi[i].id, hi[i].dept, hi[i].name);
	}
}
