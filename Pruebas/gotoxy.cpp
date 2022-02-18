#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

int main() {
  gotoxy(5,24);printf("Hola mundo");
  getch();
}

