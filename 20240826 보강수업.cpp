// ������ ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("������ �� 5���� �Է��ϼ���.\n");
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
//	int* pt = num;					// ������ pt�� �迭�� 1��° ��Ҹ� ����Ŵ = 1
//	pt++;							// ������ pt�� �迭�� 2��° ��Ҹ� ����Ŵ = 2
//	*pt++ = 5;						// ������ pt�� �迭�� 2��° ��Ҹ� 5�� �ٲٰ� 3��° ��Ҹ� ����Ŵ
//	*pt++ = 10;						// ������ pt�� �迭�� 3��° ��Ҹ� 10���� �ٲٰ� 4��° ��Ҹ� ����Ŵ
//	pt--;							// ������ pt�� �迭�� 4��° ��ҿ��� 3��° ��Ҹ� ����Ŵ
//	*pt++ += 20;					// ������ pt�� �迭�� 3��° ��ҿ� 20�� ���� ��, 4��° ��Ҹ� ����Ŵ
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// ��� ���� ���������� 1 5 30 4�� ��µ�.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// �ѱ��� �⺻������ 2����Ʈ���ε�, ������ ptr�� 7��° ��� ���ķ� ����ؾ���.
	// ������ ���ķ� ����� �ؾ��ϳ�, �����̽���(����)�� ?�� ����ϰ� �� ���ķδ� ��� ���ڰ� ��µ�.
//	char str[] = "������ ��� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";
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
//	char str[] = "������ ��� : ��� �� ������ ������ ��忡���� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// ��� ������ ������ 15��° ���. ������ 'a'�� �ٲ�.
//	str[23] = 'b';				// '��' �̶�� ���ڰ� 23, 24��° ��Ҹ� ��ƸԴµ�, 23��° ��Ҹ� b�� �ٲ�.
//	str[25] = 'c';				// '��' �̶�� ���ڿ��� 24��° ��Ұ� ���µ�, 25��° ���(����)�� c�� �ٲٰ�,
//	printf("%s\n\n", ptr);		// ���� 24��° ��ҿ� �������� c�� ��µ��� �ʰ� ?�� ��µ�.
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����1
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

// �����͸� �̿��� �迭 ����2
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
//	// �� ���ķδ� arr �迭 ���� ����.
//	// ** �߿� **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string �Լ�
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

// ���ϰ���
//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("�ȳ��ϼ���");
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
//	fprintf(pFile, "�ȳ��ϼ���");
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
//		printf("���Ͽ� ������� ���� �Է��ϼ��� : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d��° ���� [%-10s]\n", n, name);
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
//		printf("������ ã�� ���Ͽ����ϴ�.\n");
//		return -1;
//	}
//	// ���� ���� ����
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
//	FILE* src, * dst;	// Source(�ٿ�), Destination(������)
//	char name1[100], enter;
//	char name2[100];
//
//	printf("�Է¹��� ������ �̸��� �Է��ϼ��� : ");
//	scanf("%s%c", name1, &enter);
//
//	printf("��¹��� ������ �̸��� �Է��ϼ��� : ");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("������ ��ã��");
//		return -1;
//	}
//
//	// 30����Ʈ�� ��� �о��. (���ѹݺ����̴ϱ�)
//	while (true) {
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readLen, dst);
//				puts("���� ���� �Ϸ�");
//				break;
//			}
//			else {
//				printf("���� ���� ����\n");
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("������ ���� ���߽��ϴ�.");
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
//	fprintf(fp, "�����߱�\n");
//	fprintf(fp, "i:%6d \n", i);
//	fprintf(fp, "i:%7d \n", i);
//	fprintf(fp, "i:%2d \n\n", i);
//
//	fprintf(fp, "����������\n");
//	fprintf(fp, "i:%5d��\n", i);
//	fprintf(fp, "��������\n");
//	fprintf(fp, "i:%-5d��\n\n", i);
//
//	fprintf(fp, "# �����ǻ��\n");
//	fprintf(fp, "i:%#x \n", i);
//	fprintf(fp, "i:%#X \n\n", i);
//
//	fprintf(fp, "��ȣ���̱�\n");
//	fprintf(fp, "%+d, %+d \n", i, j);
//
//	fclose(fp);
//
//	return 0;
//}

// ���ϰ��� ����1
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

// ���ϰ��� ����2
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

// ���ϰ��� ����3
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
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
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

// ���ϰ��� ����4
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
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
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
//	printf("ù ��° ���ڿ� : %s\n", output1);
//	printf("�� ��° ���ڿ� : %s\n", output2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// ���ϰ��� ����5
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
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
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
//	printf("ù ��° ���ڿ� : %s\n", output1);
//	printf("�� ��° ���ڿ� : %s\n\n", output2);
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
//	printf("�� ���ڿ����� ���� ��ġ�� ���� ������ ���� : %d\n", count);
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
	printf("�� ��� : ");
	for (int i = 0; i < my; i++)
		printf("��");
	for (int i = my; i < MAXENERGY; i++)
		printf("��");
	printf("\n");
}

char* getAnswer()
{
	FILE* fp;
	char Answer[100];
	int n = 0;

	fp = fopen("sentence.txt", "r");
	
	// �ܾ� ���� ����
	fscanf(fp, "%d", &n);

	srand((unsigned int)time(NULL));
	n = rand() % n + 1;

	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s", Answer);
	}

	fclose(fp);

	// Answer �����Ҵ�
	char* p;
	p = (char*)malloc(sizeof(char) * (strlen(Answer) + 1));
	strcpy(p, Answer);

	return p;
}

int main()
{
	// �ܾ� ���� ���� �ܰ�
	char* answer = getAnswer();
	int size = strlen(answer);
	char *sentence;
	sentence = (char*)malloc(sizeof(char) * (size + 1));
	for (int i = 0; i < size; i++) {
		sentence[i] = '_';
	}
	sentence[size] = '\0';
	
	// ���� ���� �ܰ�
	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (!energy) {
			printf("���� ����...\n");
			printf("���� : %s", answer);
			break;
		}
		printf("���� : %s\n\n", sentence);

		if (strcmp(sentence, answer) == 0) {
			printf("���� �¸�!\n");
			break;
		}
		printf("�ܾ ���纸���� : ");
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