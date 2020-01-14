#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
int Box(int Walk);
int Success(int s);
int Move(int (*ptr)[9] );
int End(int E);

int i = 0, j = 0, k = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, Walk = 0;
char move = 0;
int cl1 = 0, cl2 = 0, cl3 = 0, cl4 = 0, cl5 = 0, cl6 = 0;
int* ptr = 0;
int main()
{
	int s = 0, E = 0;
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);     //커서 숨기기

	char start;
	gotoxy(4, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("  S O K B A N    G A M E\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("  < Press Any Key to Start >");
	start = getch();
	if (start = 32)
		system("cls");  //시작화면


re0:; //Esc goto위치 
	char stage = 0;
	printf(" \n  < Select Stage >\n\n    1.Stage #1(Tutorial)\n    2.Stage #2\n    3.Stage #3\n    4.Stage #4\n    5.Stage #5\n    6.Stage #6");
	

	stage = getch();



	switch (stage)
	{
	case 49:   //Stage 1
		system("cls");
	re1:;    //goto 위치

		Walk = 0;

		int map1[9][9] =
		{
			{ 1,1,1,0,0,0,0,0,0 },
			{ 1,2,1,0,0,0,0,0,0 },
			{ 1,0,1,0,0,1,1,1,1 },
			{ 1,0,1,1,1,1,0,0,1 },
			{ 1,0,0,0,0,0,0,0,1 },
			{ 1,0,0,1,1,1,1,0,1 },
			{ 1,1,1,1,0,0,1,0,1 },
			{ 0,0,0,0,0,0,1,2,1 },
			{ 0,0,0,0,0,0,1,1,1 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map1[i][j] == 0)
					printf("  ");
				else if (map1[i][j] == 1)
					printf("■");
				else if (map1[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 1 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		gotoxy(9, 23);
		printf("  ←,→,↑,↓ : 이동");
		gotoxy(10, 21);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("●");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("를 전부 ○로 이동시키면 Clear");
		a = 5, b = 9; //a,b = 옷
		c = 5, d = 7; //c,d = 첫번째 구슬
		e = 5, f = 11; //e,f = 두번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int (*ptr)[9] = map1;
			Move(ptr);

			if (move == 114)
				goto re1;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리

			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map1[i][j] == 0)
						printf("  ");
					else if (map1[i][j] == 1)
						printf("■");
					else if (map1[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 1 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(9, 23);
			printf("  ←,→,↑,↓ : 이동");
			gotoxy(10, 21);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("를 전부 ○로 이동시키면 Clear");
			gotoxy(a, b);
			printf("옷");

			if ((c == 2 && d == 3 && e == 8 && f == 15) || (c == 8 && d == 15 && e == 2 && f == 3))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 19");
		Sleep(1500);
		cl1++;
		End(E);

	case 50:  //Stage 2
		system("cls");
	re2:;    //goto 위치

		Walk = 0;

		int map2[9][9] =
		{
			{ 0,1,1,1,1,1,1,1,0 },
			{ 0,1,0,0,2,2,2,1,0 },
			{ 0,1,0,0,0,1,1,1,1 },
			{ 1,1,1,0,0,0,0,0,1 },
			{ 1,0,0,0,1,0,1,0,1 },
			{ 1,0,0,0,1,0,0,0,1 },
			{ 1,0,0,0,1,1,1,1,1 },
			{ 1,1,1,1,1,0,0,0,0 },
			{ 0,0,0,0,0,0,0,0,0 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map2[i][j] == 0)
					printf("  ");
				else if (map2[i][j] == 1)
					printf("■");
				else if (map2[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 2 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		a = 3, b = 7; //a,b = 옷
		c = 4, d = 7; //c,d = 첫번째 구슬
		e = 5, f = 11; //e,f = 두번째 구슬
		g = 6, h = 5; //g,h = 세번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			gotoxy(g, h);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int(*ptr)[9] = map2;
			Move(ptr);

			if (move == 114)
				goto re2;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map2[i][j] == 0)
						printf("  ");
					else if (map2[i][j] == 1)
						printf("■");
					else if (map2[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 2 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(a, b);
			printf("옷");

			if ((c == 2 && d == 9 && e == 2 && f == 11 && g == 2 && h == 13)
				|| (c == 2 && d == 9 && e == 2 && f == 13 && g == 2 && h == 11)
				|| (c == 2 && d == 11 && e == 2 && f == 9 && g == 2 && h == 13)
				|| (c == 2 && d == 13 && e == 2 && f == 9 && g == 2 && h == 11)
				|| (c == 2 && d == 11 && e == 2 && f == 13 && g == 2 && h == 9)
				|| (c == 2 && d == 13 && e == 2 && f == 11 && g == 2 && h == 9))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 69");
		Sleep(1500);
		cl2++;
		End(E);

	case 51:   //Stage 3
		system("cls");
	re3:;    //goto 위치

		Walk = 0;

		int map3[9][9] =
		{
			{ 1,1,1,1,1,0,0,0,0 },
			{ 1,0,0,0,1,0,0,0,0 },
			{ 1,0,0,0,1,0,1,1,1 },
			{ 1,0,0,0,1,0,1,2,1 },
			{ 1,1,1,0,1,1,1,2,1 },
			{ 0,1,1,0,0,0,0,2,1 },
			{ 0,1,0,0,0,1,0,0,1 },
			{ 0,1,0,0,0,1,1,1,1 },
			{ 0,1,1,1,1,1,0,0,0 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map3[i][j] == 0)
					printf("  ");
				else if (map3[i][j] == 1)
					printf("■");
				else if (map3[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 3 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		a = 2, b = 3; //a,b = 옷
		c = 3, d = 5; //c,d = 첫번째 구슬
		e = 3, f = 7; //e,f = 두번째 구슬
		g = 4, h = 5; //g,h = 세번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			gotoxy(g, h);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int(*ptr)[9] = map3;
			Move(ptr);

			if (move == 114)
				goto re3;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map3[i][j] == 0)
						printf("  ");
					else if (map3[i][j] == 1)
						printf("■");
					else if (map3[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 3 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(a, b);
			printf("옷");

			if ((c == 4 && d == 15 && e == 5 && f == 15 && g == 6 && h == 15)
				|| (c == 4 && d == 15 && e == 6 && f == 15 && g == 5 && h == 15)
				|| (c == 5 && d == 15 && e == 4 && f == 15 && g == 6 && h == 15)
				|| (c == 6 && d == 15 && e == 4 && f == 15 && g == 5 && h == 15)
				|| (c == 5 && d == 15 && e == 6 && f == 15 && g == 4 && h == 15)
				|| (c == 6 && d == 15 && e == 5 && f == 15 && g == 4 && h == 15))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 93");
		Sleep(1500);
		cl3++;
		End(E);

	case 52:   //Stage 4
		system("cls");
	re4:;    //goto 위치

		Walk = 0;

		int map4[9][9] =
		{
			{ 0,1,1,1,1,1,0,0,0 },
			{ 0,1,0,0,1,1,1,0,0 },
			{ 0,1,0,0,0,0,1,0,0 },
			{ 1,1,1,0,1,0,1,1,0 },
			{ 1,2,1,0,1,0,0,1,0 },
			{ 1,2,0,0,0,1,0,1,0 },
			{ 1,2,0,0,0,0,0,1,0 },
			{ 1,1,1,1,1,1,1,1,0 },
			{ 0,0,0,0,0,0,0,0,0 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map4[i][j] == 0)
					printf("  ");
				else if (map4[i][j] == 1)
					printf("■");
				else if (map4[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 4 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		a = 2, b = 5; //a,b = 옷
		c = 3, d = 7; //c,d = 첫번째 구슬
		e = 6, f = 5; //e,f = 두번째 구슬
		g = 7, h = 11; //g,h = 세번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			gotoxy(g, h);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int(*ptr)[9] = map4;
			Move(ptr);

			if (move == 114)
				goto re4;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map4[i][j] == 0)
						printf("  ");
					else if (map4[i][j] == 1)
						printf("■");
					else if (map4[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 4 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(a, b);
			printf("옷");

			if ((c == 5 && d == 3 && e == 6 && f == 3 && g == 7 && h == 3)
				|| (c == 5 && d == 3 && e == 7 && f == 3 && g == 6 && h == 3)
				|| (c == 6 && d == 3 && e == 5 && f == 3 && g == 7 && h == 3)
				|| (c == 7 && d == 3 && e == 5 && f == 3 && g == 6 && h == 3)
				|| (c == 6 && d == 3 && e == 7 && f == 3 && g == 5 && h == 3)
				|| (c == 7 && d == 3 && e == 6 && f == 3 && g == 5 && h == 3))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 50");
		Sleep(1500);
		cl4++;
		End(E);

	case 53:    //Stage 5
		system("cls");
	re5:;    //goto 위치

		Walk = 0;

		int map5[9][9] =
		{
			{ 1,1,1,1,1,1,1,1,0 },
			{ 1,0,0,0,0,0,2,1,0 },
			{ 1,0,0,0,0,1,1,1,0 },
			{ 1,1,1,0,0,0,1,0,0 },
			{ 0,1,0,0,0,0,1,1,0 },
			{ 0,1,0,0,0,2,2,1,0 },
			{ 0,1,1,1,1,1,1,1,0 },
			{ 0,0,0,0,0,0,0,0,0 },
			{ 0,0,0,0,0,0,0,0,0 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map5[i][j] == 0)
					printf("  ");
				else if (map5[i][j] == 1)
					printf("■");
				else if (map5[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 5 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		a = 6, b = 7; //a,b = 옷
		c = 3, d = 9; //c,d = 첫번째 구슬
		e = 4, f = 7; //e,f = 두번째 구슬
		g = 4, h = 9; //g,h = 세번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			gotoxy(g, h);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int(*ptr)[9] = map5;
			Move(ptr);

			if (move == 114)
				goto re5;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map5[i][j] == 0)
						printf("  ");
					else if (map5[i][j] == 1)
						printf("■");
					else if (map5[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 5 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(a, b);
			printf("옷");

			if ((c == 2 && d == 13 && e == 6 && f == 13 && g == 6 && h == 11)
				|| (c == 2 && d == 13 && e == 6 && f == 11 && g == 6 && h == 13)
				|| (c == 6 && d == 13 && e == 2 && f == 13 && g == 6 && h == 11)
				|| (c == 6 && d == 11 && e == 2 && f == 13 && g == 6 && h == 13)
				|| (c == 6 && d == 13 && e == 6 && f == 11 && g == 2 && h == 13)
				|| (c == 6 && d == 11 && e == 6 && f == 13 && g == 2 && h == 13))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 41");
		Sleep(1500);
		cl5++;
		End(E);

	case 54:    //Stage 6
		system("cls");
	re6:;    //goto 위치

		Walk = 0;

		int map6[9][9] =
		{
			{ 0,0,1,1,1,0,0,0,0 },
			{ 1,1,1,2,1,1,1,0,0 },
			{ 1,0,0,0,0,0,1,0,0 },
			{ 1,0,1,0,2,0,1,0,0 },
			{ 1,0,0,2,0,0,1,0,0 },
			{ 1,1,1,0,0,1,1,0,0 },
			{ 0,0,1,0,0,1,0,0,0 },
			{ 0,0,1,1,1,1,0,0,0 },
			{ 0,0,0,0,0,0,0,0,0 }
		};
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (map6[i][j] == 0)
					printf("  ");
				else if (map6[i][j] == 1)
					printf("■");
				else if (map6[i][j] == 2)
					printf("○");
			}
			printf("\n");
		}
		Box(Walk);
		gotoxy(3, 23);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("      < Stage 6 >");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		a = 4, b = 11; //a,b = 옷
		c = 3, d = 5; //c,d = 첫번째 구슬
		e = 4, f = 7; //e,f = 두번째 구슬
		g = 6, h = 7; //g,h = 세번째 구슬
		gotoxy(a, b);
		printf("옷");
		for (k = 0;;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //색깔 바꾸기
			gotoxy(c, d);
			printf("●");
			gotoxy(e, f);
			printf("●");
			gotoxy(g, h);
			printf("●");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			move = getch();
			system("cls");
			int(*ptr)[9] = map6;
			Move(ptr);

			if (move == 114)
				goto re6;//r를 누르면 리겜하도록 처리
			if (move == 27)
				goto re0;//Esc를 누르면 다른 스테이지 선택하도록 처리
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (map6[i][j] == 0)
						printf("  ");
					else if (map6[i][j] == 1)
						printf("■");
					else if (map6[i][j] == 2)
						printf("○");
				}
				printf("\n");
			}
			Box(Walk);
			gotoxy(3, 23);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			printf("      < Stage 6 >");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			gotoxy(a, b);
			printf("옷");

			if ((c == 2 && d == 7 && e == 4 && f == 9 && g == 5 && h == 7)
				|| (c == 2 && d == 7 && e == 5 && f == 7 && g == 4 && h == 9)
				|| (c == 4 && d == 9 && e == 2 && f == 7 && g == 5 && h == 7)
				|| (c == 5 && d == 7 && e == 2 && f == 7 && g == 4 && h == 9)
				|| (c == 4 && d == 9 && e == 5 && f == 7 && g == 2 && h == 7)
				|| (c == 5 && d == 7 && e == 4 && f == 9 && g == 2 && h == 7))
				break;
		}
		Success(s);
		gotoxy(7, 5);
		printf(" 최소걸음수 : 46");
		Sleep(1500);
		cl6++;
		End(E);
		system("cls");
		goto re0;
	}

}

void gotoxy(int x, int y)
{
	COORD Pos = { y - 1, x - 1 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int Box(int Walk)
{
	gotoxy(4, 23);
	printf("      R : restart");
	gotoxy(5, 23);
	printf("Esc : 다른 스테이지 선택");
	gotoxy(7, 23);
	printf("       걸음수 : ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("%d", Walk);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int Success(int s)
{
	system("cls");
	gotoxy(4, 3);
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		printf("s");
		Sleep(100);
		printf(" u");
		Sleep(100);
		printf(" c");
		Sleep(100);
		printf(" c");
		Sleep(100);
		printf(" e");
		Sleep(100);
		printf(" s");
		Sleep(100);
		printf(" s!");
		Sleep(100);
		printf(" o^▽^o");
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("\n\n       걸음수 : %d", Walk);
	}
}

int Move(int (*ptr)[9])
{
	switch (move)
	{
	case 72: //윗방향
		if ( ptr[a - 2][((b + 1) / 2) - 1] == 1)   //캐릭터가 벽 통과하지 못하게 처리
			break;

		else if (b == d && c == a - 1 && (ptr[a - 3][((b + 1) / 2) - 1] == 0 || ptr[a - 3][((b + 1) / 2) - 1] == 2))  //
		{
			if (b == d && b == f && ((c == e - 1 && e == a - 1) || (e == c - 1 && c == a - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && g == a - 1) || (g == c - 1 && c == a - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && g == a - 1) || (g == e - 1 && e == a - 1)))
				break;
			c--;
		}   //구슬이 연속으로 있으면 밀 수 없게 처리
		else if (b == d && c == a - 1 && ptr[a - 3][((b + 1) / 2) - 1] == 1)
			break;
		else if (b == f && e == a - 1 && (ptr[a - 3][((b + 1) / 2) - 1] == 0 || ptr[a - 3][((b + 1) / 2) - 1] == 2))
		{
			if (b == d && b == f && ((c == e - 1 && e == a - 1) || (e == c - 1 && c == a - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && g == a - 1) || (g == c - 1 && c == a - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && g == a - 1) || (g == e - 1 && e == a - 1)))
				break;
			e--;
		}
		else if (b == f && e == a - 1 && ptr[a - 3][((b + 1) / 2) - 1] == 1)
			break;
		else if (b == h && g == a - 1 && (ptr[a - 3][((b + 1) / 2) - 1] == 0 || ptr[a - 3][((b + 1) / 2) - 1] == 2))
		{
			if (b == d && b == f && ((c == e - 1 && e == a - 1) || (e == c - 1 && c == a - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && g == a - 1) || (g == c - 1 && c == a - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && g == a - 1) || (g == e - 1 && e == a - 1)))
				break;
			g--;
		}
		else if (b == h && g == a - 1 && ptr[a - 3][((b + 1) / 2) - 1] == 1)
			break;   //캐릭터가 구슬을 밀 수 있게 처리, 벽이 있으면 밀 수 없게 처리

		a--;
		Walk++;
		break;

	case 75: //왼쪽 방향
		if (ptr[a - 1][((b + 1) / 2) - 2] == 1)
			break;

		else if (a == c && d == b - 2 && (ptr[a - 1][((b + 1) / 2) - 3] == 0 || ptr[a - 1][((b + 1) / 2) - 3] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && f == b - 2) || (f == d - 2 && d == b - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && h == b - 2) || (h == d - 2 && d == b - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && h == b - 2) || (h == f - 2 && f == b - 2)))
				break;
			d -= 2;
		}
		else if (a == c && d == b - 2 && ptr[a - 1][((b + 1) / 2) - 3] == 1)
			break;
		else if (a == e && f == b - 2 && (ptr[a - 1][((b + 1) / 2) - 3] == 0 || ptr[a - 1][((b + 1) / 2) - 3] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && f == b - 2) || (f == d - 2 && d == b - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && h == b - 2) || (h == d - 2 && d == b - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && h == b - 2) || (h == f - 2 && f == b - 2)))
				break;
			f -= 2;
		}
		else if (a == e && f == b - 2 && ptr[a - 1][((b + 1) / 2) - 3] == 1)
			break;
		else if (a == g && h == b - 2 && (ptr[a - 1][((b + 1) / 2) - 3] == 0 || ptr[a - 1][((b + 1) / 2) - 3] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && f == b - 2) || (f == d - 2 && d == b - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && h == b - 2) || (h == d - 2 && d == b - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && h == b - 2) || (h == f - 2 && f == b - 2)))
				break;
			h -= 2;
		}
		else if (a == g && h == b - 2 && ptr[a - 1][((b + 1) / 2) - 3] == 1)
			break;

		b -= 2;
		Walk++;
		break;

	case 80: //아래쪽 방향
		if (ptr[a][((b + 1) / 2) - 1] == 1)
			break;

		else if (b == d && c == a + 1 && (ptr[a + 1][((b + 1) / 2) - 1] == 0 || ptr[a + 1][((b + 1) / 2) - 1] == 2))
		{
			if (b == d && b == f && ((c == e - 1 && a == c - 1) || (e == c - 1 && a == e - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && a == c - 1) || (g == c - 1 && a == g - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && a == e - 1) || (g == e - 1 && a == g - 1)))
				break;
			c++;
		}
		else if (b == d && c == a + 1 && ptr[a + 1][((b + 1) / 2) - 1] == 1)
			break;
		else if (b == f && e == a + 1 && (ptr[a + 1][((b + 1) / 2) - 1] == 0 || ptr[a + 1][((b + 1) / 2) - 1] == 2))
		{
			if (b == d && b == f && ((c == e - 1 && a == c - 1) || (e == c - 1 && a == e - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && a == c - 1) || (g == c - 1 && a == g - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && a == e - 1) || (g == e - 1 && a == g - 1)))
				break;
			e++;
		}
		else if (b == f && e == a + 1 && ptr[a + 1][((b + 1) / 2) - 1] == 1)
			break;
		else if (b == h && g == a + 1 && (ptr[a + 1][((b + 1) / 2) - 1] == 0 || ptr[a + 1][((b + 1) / 2) - 1] == 2))
		{
			if (b == d && b == f && ((c == e - 1 && a == c - 1) || (e == c - 1 && a == e - 1)))
				break;
			else if (b == d && b == h && ((c == g - 1 && a == c - 1) || (g == c - 1 && a == g - 1)))
				break;
			else if (b == f && b == h && ((e == g - 1 && a == e - 1) || (g == e - 1 && a == g - 1)))
				break;
			g++;
		}
		else if (b == h && g == a + 1 && ptr[a + 1][((b + 1) / 2) - 1] == 1)
			break;

		a++;
		Walk++;
		break;

	case 77: //오른쪽 방향
		if (ptr[a - 1][(b + 1) / 2] == 1)
			break;

		else if (a == c && d == b + 2 && (ptr[a - 1][((b + 1) / 2) + 1] == 0 || ptr[a - 1][((b + 1) / 2) + 1] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && b == d - 2) || (f == d - 2 && b == f - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && b == d - 2) || (h == d - 2 && b == h - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && b == f - 2) || (h == f - 2 && b == h - 2)))
				break;
			d += 2;
		}
		else if (a == c && d == b + 2 && ptr[a - 1][((b + 1) / 2) + 1] == 1)
			break;
		else if (a == e && f == b + 2 && (ptr[a - 1][((b + 1) / 2) + 1] == 0 || ptr[a - 1][((b + 1) / 2) + 1] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && b == d - 2) || (f == d - 2 && b == f - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && b == d - 2) || (h == d - 2 && b == h - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && b == f - 2) || (h == f - 2 && b == h - 2)))
				break;
			f += 2;
		}
		else if (a == e && f == b + 2 && ptr[a - 1][((b + 1) / 2) + 1] == 1)
			break;
		else if (a == g && h == b + 2 && (ptr[a - 1][((b + 1) / 2) + 1] == 0 || ptr[a - 1][((b + 1) / 2) + 1] == 2))
		{
			if (a == c && a == e && ((d == f - 2 && b == d - 2) || (f == d - 2 && b == f - 2)))
				break;
			else if (a == c && a == g && ((d == h - 2 && b == d - 2) || (h == d - 2 && b == h - 2)))
				break;
			else if (a == e && a == g && ((f == h - 2 && b == f - 2) || (h == f - 2 && b == h - 2)))
				break;
			h += 2;
		}
		else if (a == g && h == b + 2 && ptr[a - 1][((b + 1) / 2) + 1] == 1)
			break;

		b += 2;
		Walk++;
		break;

	}
}

int End(int E)
{
	if (cl1 = 1 && cl2 == 1 && cl3 == 1 && cl4 == 1 && cl5 == 1 && cl6 == 1)
	{
		for (i = 0;i < 5;i++)
		{
			system("cls");
			printf("\n\n\n\n\n\n          o  ^▽^o");
			Sleep(100);
			system("cls");
			printf("\n\n\n\n\n\n          o^▽^  o");
			Sleep(100);
		}

		system("cls");
		printf("\n\n    *  *  *  *  *  *  *  *   ");
		printf("\n  *    Congratulations!!    *");
		printf("\n  *            ♡           *");
		printf("\n  *        All Clear        *");
		printf("\n    *  *  *  *  *  *  *  *   ");
		Sleep(10000);
	}
	return 0;
}