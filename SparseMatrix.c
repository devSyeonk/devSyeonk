// < �Ϲ� 2���� �迭(10X10) >>  Sparse Matrix (��� ���) ���� ������� ��ȯ�ϴ� ���α׷� >

#include <stdio.h>
int main() {

	//10 X 10 ��� ���� �� �ʱ�ȭ.
	printf("\n");
	printf("  ù ��° �ܰ�� 10 X 10 ������ ����� ���� �� �ʱ�ȭ �ϰڽ��ϴ�.");

	int a[10][10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		printf("\n\n");

		for (int j = 0; j < 10; j++)
		{
			printf("  a[%d][%d]= %d  | ", i, j, a[i][j]);
		}

		printf("\n\n");

		for (int i = 0; i < 159; i++) {
			printf("=");
		}
	}

	printf("\n\n");  //10 X 10 ��� ���� �� �ʱ�ȭ ��.

	int SparseRow;
	printf(" �� ���� �ǹ� �ִ� Value���� ����������? ");
	scanf("%d", &SparseRow); //���ϴ� �ǹ� �ִ� ���� ������ �� ���� ���ٲ���. ���� ex) '6' �Է�.

	printf("\n ��� �Է��� %d���� �ǹ��ִ� Value ���� 10X10 �迭�� �־�ô�. \n\n", SparseRow);

	printf(" �迭�� ������ ���� %d���� �Է����ּ��� : ", SparseRow);
	scanf("%d %d %d %d %d %d", &a[0][0], &a[0][2], &a[0][9], &a[1][8], &a[2][1], &a[8][0]);
	printf("\n");

	printf(" �ǹ� �ִ� value���� ������ 10 X 10 ����� �ٽ� ����غ��ô�.\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("\n");

		for (int j = 0; j < 10; j++)
		{
			printf("  a[%d][%d]= %d  | ", i, j, a[i][j]);
		}

		printf("\n\n");

		for (int i = 0; i < 159; i++) {
			printf("=");
		}

		printf("\n");

	}

	printf("\n\n");

	// Sparse Matrix ���
	printf("���������� �ǹ��ִ� %d ���� value ���� ���� �����ϴ� Sparse Matrix(SM)�� ����غ����� �ϰڽ��ϴ�.\n\n", SparseRow);

	int SM[7][3] = { 0, }; // ���� 3���� ����(because row, col, value �־���� �ϴϱ�) & �̶� ���� �ռ� �Է¹��� SparseRow�� �������ָ� ��.


	printf("ù ��° ���� 3���� ĭ���� ���ʴ�� ���� �迭�� ��,���� ���� �ǹ��ִ� value���� ���� ���ϴ�.\n\n");
	printf("���� 3���� ���ڸ� ���ʴ�� �Է����ּ��� : ");
	scanf("%d %d %d", &SM[0][0], &SM[0][1], &SM[0][2]);


	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			if (a[i][j] ! = 0)
			{
				SM[1 + cnt][0] = i;
				SM[1 + cnt][1] = j;
				SM[1 + cnt][2] = a[i][j];

				cnt++;
			}

		}
	}
	

	for (int i = 0; i < 7; i++)
	{
		printf("\n");

		for (int j = 0; j < 3; j++)
		{
			printf("%d ", SM[i][j]);

		}

		printf("==================");
		printf("\n\n");
	}

	printf("������ ��µǾ����ϴ�. �����մϴ�!");


}
