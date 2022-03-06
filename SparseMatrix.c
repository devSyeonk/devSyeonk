// < 일반 2차원 배열(10X10) >>  Sparse Matrix (요약 행렬) 저장 방식으로 변환하는 프로그램 >

#include <stdio.h>
int main() {

	//10 X 10 행렬 선언 후 초기화.
	printf("\n");
	printf("  첫 번째 단계로 10 X 10 이차원 행렬을 선언 후 초기화 하겠습니다.");

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

	printf("\n\n");  //10 X 10 행렬 선언 후 초기화 끝.

	int SparseRow;
	printf(" 몇 개의 의미 있는 Value값을 넣을껀가요? ");
	scanf("%d", &SparseRow); //원하는 의미 있는 값의 개수를 몇 개로 해줄껀지. 여기 ex) '6' 입력.

	printf("\n 방금 입력한 %d개의 의미있는 Value 값을 10X10 배열에 넣어봅시다. \n\n", SparseRow);

	printf(" 배열에 포함할 숫자 %d개를 입력해주세요 : ", SparseRow);
	scanf("%d %d %d %d %d %d", &a[0][0], &a[0][2], &a[0][9], &a[1][8], &a[2][1], &a[8][0]);
	printf("\n");

	printf(" 의미 있는 value값을 포함한 10 X 10 행렬을 다시 출력해봅시다.\n\n");
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

	// Sparse Matrix 출력
	printf("최종적으로 의미있는 %d 개의 value 값만 따로 저장하는 Sparse Matrix(SM)을 출력해보도록 하겠습니다.\n\n", SparseRow);

	int SM[7][3] = { 0, }; // 행은 3으로 일정(because row, col, value 넣어줘야 하니까) & 이때 열을 앞서 입력받은 SparseRow로 선언해주면 됨.


	printf("첫 번째 행의 3개의 칸에는 차례대로 기존 배열의 행,열의 값과 의미있는 value값의 개수 들어갑니다.\n\n");
	printf("각각 3개의 숫자를 차례대로 입력해주세요 : ");
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

	printf("끝까지 출력되었습니다. 축하합니다!");


}
