#include <stdio.h>
#include <math.h>
#include <Windows.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS



int fact(int n) {
	if (n == 0) {
		return 1;
	}
	return fact(n - 1) * n;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	printf("%d", fact(5));

	//������ 1
	/*FILE* fin = fopen("text1.txt", "rt");
	FILE* fout;
	fout = fopen("out1.txt", "wt");
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {

				if (s[i] == '\t')
					s[i] = '%';

			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("������ 1 FINISH\n");*/


	//������ 2
	/*FILE* fin = fopen("text2.txt", "rt");
	FILE* fout;
	fout = fopen("out2.txt", "wt");
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toUpperAll(s[i]);
			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("������ 2 FINISH\n");*/

	//������ 3
	/*FILE* fin = fopen("text3.txt", "rt");
	FILE* fout = fopen("out3.txt", "wt");
	while (fgets(s, MAX_LEN, fin)) {
		int hasLetter = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			if (isalpha((unsigned char)s[i])) {
				hasLetter = 1;
				break;
			}
		}
		fputs(s, fout);
		if (hasLetter) {
			fputc('#', fout);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("������ 3 FINISH\n");*/

	//������ 4
	//int getNextDelim(FILE * fp, char token[]);
	//int getNextWord(FILE * fp, char token[], int maxLen);

	//char filename[] = "text1.txt";

	//// ��������� ���� � �������
	//FILE* fin = fopen(filename, "rt");
	//if (fin == NULL) {
	//	// ���� ���� �� ������ ������� - �������� �� ����
	//	printf("File %s doesn't opened!\n", filename);
	//	return;
	//}
	//char token[MAX_LEN];
	//int res;

	//// ���� �� ����� �����
	//while (!feof(fin)) {
	//	// ���� ���� ����������� - ����� ���
	//	while (getNextDelim(fin, token)) {
	//		// ������� ����������� � �������
	//		printf("<DELIM>%s</DELIM>\n", token);
	//	}
	//	// ���� ���� ����� - ����� ���
	//	if (getNextWord(fin, token, MAX_LEN)) {
	//		// ������� ����� � �������
	//		printf("<WORD>%s</WORD>\n", token);
	//	}
	//}
	//// ��������� ���� � �������
	//fclose(fin);
	//printf("END!!!\n");

	//������ 5
	//char filenameIn[] = "text1.txt";
	//char filenameHTML[] = "text1_out.html";
	//printf("BEGIN!!!\n");

	//// ������� ���� ��������� (�������)
	//FILE* fin = fopen(filenameIn, "rt");
	//if (fin == NULL) {
	//	// ���� ���� �� ������ ������� - �������� �� ����
	//	printf("File %s doesn't opened!\n", filenameIn);
	//	return;
	//}
	//// ������� HTML ���� (�������� ����)
	//FILE* fout = fopen(filenameHTML, "wt");
	//if (fout == NULL) {
	//	// ��������� ����� ������� �������� ������� ����
	//	fclose(fin);
	//	// ���� ���� �� ������ ������� - �������� �� ����
	//	printf("File %s doesn't opened!\n", filenameHTML);
	//	return;
	//}


	//// ������� � �������� ���� ��������� HTML ���������
	//fprintf(fout, "<!DOCTYPE html>");
	//fprintf(fout, "<html>");
	//fprintf(fout, "<head>");
	//fprintf(fout, "<meta http - equiv = \"Content-Type\" content = \"text/html; charset=utf-8\" />");
	//fprintf(fout, "<title>HTML Document</title>");
	//fprintf(fout, "</head>");
	//fprintf(fout, "<body>");

	//int ch;
	//while ((ch = getc(fin)) != EOF) {
	//	// � HTML ���� ��������� ������ ��� �����������
	//	// ������ "��� ����"
	//	fprintf(fout, "%c", ch);

	//	// ���� � ������ ��� ������ ����� ������ �
	//	// � HTML ��������� ��� <BR> - ����� ������
	//	if (ch == '\n')
	//		fprintf(fout, "<br>");
	//}

	//// ������� � HTML ����������� ���� ��������� HTML
	//fprintf(fout, "</body>");
	//fprintf(fout, "</html>");
	//// ��������� ���� � �������
	//fclose(fin);

	//// ��������� HTML ����
	//fclose(fout);
	//printf("END!!!\n");


	//������ 6
	/*FILE* fin = fopen("text6.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	FILE* fout;
	fout = fopen("out6.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	int digits = 0;
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			digits = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (isT(s[i])) {
					digits++;
				}
			}
			char str[MAX_LEN];
			sprintf(str, "%d", digits);
			if (digits != 0) {
				strcat(s, str);
			}
			fprintf(fout, "%s", s);
		}
	}
	fclose(fin);
	fclose(fout);
	printf("������ 6 FINISH\n");*/



	////������ 7
	//FILE* inputFile, * outputFile;
	//int character;
	//inputFile = fopen("text7.txt", "rt");
	//outputFile = fopen("out7.txt", "wt");
	//if (inputFile == NULL || outputFile == NULL) {
	//	printf("������ �������� ������\n");
	//	return 1;
	//}
	//while ((character = fgetc(inputFile)) != EOF) {
	//	if (isalpha(character)) {
	//		character = tolower(character);
	//	}
	//	fputc(character, outputFile);
	//}
	//fclose(inputFile);
	//fclose(outputFile);
	//printf("���������\n");	
}



