// 포인터 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("임의의 수 5개를 입력하세요.\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = arr;
//
//	ptr = ptr + 2;
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;					// 포인터 pt는 배열의 1번째 요소를 가리킴 = 1
//	pt++;							// 포인터 pt는 배열의 2번째 요소를 가리킴 = 2
//	*pt++ = 5;						// 포인터 pt는 배열의 2번째 요소를 5로 바꾸고 3번째 요소를 가리킴
//	*pt++ = 10;						// 포인터 pt는 배열의 3번째 요소를 10으로 바꾸고 4번째 요소를 가리킴
//	pt--;							// 포인터 pt는 배열의 4번째 요소에서 3번째 요소를 가리킴
//	*pt++ += 20;					// 포인터 pt는 배열의 3번째 요소에 20을 더한 후, 4번째 요소를 가리킴
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// 출력 값은 최종적으로 1 5 30 4가 출력됨.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// 한글은 기본적으로 2바이트씩인데, 포인터 ptr이 7번째 요소 이후로 출력해야함.
	// 기울어진 이후로 출력을 해야하나, 스페이스바(공백)를 ?로 출력하고 그 이후로는 모든 문자가 출력됨.
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// 운동장 다음의 공백이 15번째 요소. 공백을 'a'로 바꿈.
//	str[23] = 'b';				// '한' 이라는 문자가 23, 24번째 요소를 잡아먹는데, 23번째 요소를 b로 바꿈.
//	str[25] = 'c';				// '한' 이라는 문자에서 24번째 요소가 남는데, 25번째 요소(공백)를 c로 바꾸고,
//	printf("%s\n\n", ptr);		// 남은 24번째 요소와 합쳐져서 c가 출력되지 않고 ?가 출력됨.
//
//	return 0;
//}

// 포인터를 이용한 배열 문제1
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[99];
//
//	for (int i = 99; i >= 0; i--) {
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

// 포인터를 이용한 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	const int index = 100;
//	int num = 1;
//	int arr[index] = {};
//
//	for (int i = 0; i < index; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[index / 2];
//
//	// 이 이후로는 arr 배열 쓰지 말것.
//	// ** 중요 **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string 함수
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}

// 파일관리
//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myFile.txt", "r");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myFile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		printf("파일에 쓰고싶은 말을 입력하세요 : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용 [%-10s]\n", n, name);
//	}
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile1.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("파일을 찾지 못하였습니다.\n");
//		return -1;
//	}
//	// 파일 내용 복사
//	while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define BUFF_SIZE 30
//
//int main()
//{
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;	// Source(근원), Destination(목적지)
//	char name1[100], enter;
//	char name2[100];
//
//	printf("입력받을 파일의 이름을 입력하세요 : ");
//	scanf("%s%c", name1, &enter);
//
//	printf("출력받을 파일의 이름을 입력하세요 : ");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("파일을 못찾음");
//		return -1;
//	}
//
//	// 30바이트씩 계속 읽어옴. (무한반복문이니까)
//	while (true) {
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readLen, dst);
//				puts("파일 복사 완료");
//				break;
//			}
//			else {
//				printf("파일 복사 실패\n");
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("파일을 닫지 못했습니다.");
//		return -1;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("output.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "폭맞추기\n");
//	fprintf(fp, "i:%6d \n", i);
//	fprintf(fp, "i:%7d \n", i);
//	fprintf(fp, "i:%2d \n\n", i);
//
//	fprintf(fp, "오른쪽정렬\n");
//	fprintf(fp, "i:%5d끝\n", i);
//	fprintf(fp, "왼쪽정렬\n");
//	fprintf(fp, "i:%-5d끝\n\n", i);
//
//	fprintf(fp, "# 문자의사용\n");
//	fprintf(fp, "i:%#x \n", i);
//	fprintf(fp, "i:%#X \n\n", i);
//
//	fprintf(fp, "부호붙이기\n");
//	fprintf(fp, "%+d, %+d \n", i, j);
//
//	fclose(fp);
//
//	return 0;
//}

// 파일관리 문제1
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//
//	fp = fopen("problem1.txt", "w");
//
//	fprintf(fp, "HelloWorld");
//
//	fclose(fp);
//
//	return 0;
//}

// 파일관리 문제2
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp1, *fp2;
//
//	fp1 = fopen("problem2-1.txt", "w");
//	fp2 = fopen("problem2-2.txt", "w");
//
//	fprintf(fp1, "HelloWorld");
//	fprintf(fp2, "byeworld");
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// 파일관리 문제3
//#include <stdio.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, *fp2;
//	char content1[CONTENT_SIZE] = "", content2[CONTENT_SIZE] = "";
//
//	fp1 = fopen("problem3-1.txt", "w");
//	fp2 = fopen("problem3-2.txt", "w");
//
//	printf("첫 번째 문자열을 입력하세요 : ");
//	scanf("%s", content1);
//
//	printf("두 번째 문자열을 입력하세요 : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// 파일관리 문제4
//#include <stdio.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, * fp2;
//	char content1[CONTENT_SIZE], content2[CONTENT_SIZE];
//	char output1[CONTENT_SIZE], output2[CONTENT_SIZE];
//
//	fp1 = fopen("problem4-1.txt", "w");
//	fp2 = fopen("problem4-2.txt", "w");
//
//	printf("첫 번째 문자열을 입력하세요 : ");
//	scanf("%s", content1);
//
//	printf("두 번째 문자열을 입력하세요 : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("problem4-1.txt", "r");
//	fp2 = fopen("problem4-2.txt", "r");
//
//	fscanf(fp1, "%s", output1);
//	fscanf(fp2, "%s", output2);
//
//	printf("첫 번째 문자열 : %s\n", output1);
//	printf("두 번째 문자열 : %s\n", output2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// 파일관리 문제5
//#include <stdio.h>
//#include <string.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, * fp2;
//	char content1[CONTENT_SIZE], content2[CONTENT_SIZE];
//	char output1[CONTENT_SIZE], output2[CONTENT_SIZE];
//
//	fp1 = fopen("problem5-1.txt", "w");
//	fp2 = fopen("problem5-2.txt", "w");
//
//	printf("첫 번째 문자열을 입력하세요 : ");
//	scanf("%s", content1);
//
//	printf("두 번째 문자열을 입력하세요 : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("problem5-1.txt", "r");
//	fp2 = fopen("problem5-2.txt", "r");
//
//	fscanf(fp1, "%s", output1);
//	fscanf(fp2, "%s", output2);
//
//	printf("첫 번째 문자열 : %s\n", output1);
//	printf("두 번째 문자열 : %s\n\n", output2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	int contentLen_max = 0;
//	int count = 0;
//	if (strlen(output1) > strlen(output2))
//		contentLen_max = strlen(output1);
//	else
//		contentLen_max = strlen(output2);
//
//	for (int i = 0; i < contentLen_max; i++) {
//		if (output1[i] == output2[i])
//			count++;
//	}
//	printf("두 문자열에서 같은 위치에 같은 문자의 개수 : %d\n", count);
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 3

void printenergy(int my)
{
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++)
		printf("■");
	for (int i = my; i < MAXENERGY; i++)
		printf("□");
	printf("\n");
}

char* getAnswer()
{
	FILE* fp;
	char Answer[100];
	int n = 0;

	fp = fopen("sentence.txt", "r");
	
	// 단어 랜덤 추출
	fscanf(fp, "%d", &n);

	srand((unsigned int)time(NULL));
	n = rand() % n + 1;

	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s", Answer);
	}

	fclose(fp);

	// Answer 동적할당
	char* p;
	p = (char*)malloc(sizeof(char) * (strlen(Answer) + 1));
	strcpy(p, Answer);

	return p;
}

int main()
{
	// 단어 랜덤 추출 단계
	char* answer = getAnswer();
	int size = strlen(answer);
	char *sentence;
	sentence = (char*)malloc(sizeof(char) * (size + 1));
	for (int i = 0; i < size; i++) {
		sentence[i] = '_';
	}
	sentence[size] = '\0';
	
	// 게임 실행 단계
	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (!energy) {
			printf("게임 오버...\n");
			printf("정답 : %s", answer);
			break;
		}
		printf("정답 : %s\n\n", sentence);

		if (strcmp(sentence, answer) == 0) {
			printf("게임 승리!\n");
			break;
		}
		printf("단어를 맞춰보세요 : ");
		scanf(" %c", input);

		bool check = true;
		for (int i = 0; i < size; i++) {
			if (answer[i] == input) {
				sentence[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}
	free(answer);
	free(sentence);

	return 0;
}