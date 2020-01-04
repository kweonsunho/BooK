#include <stdio.h>
#include <stdlib.h>
int x,y;
 struct Person;
 struct BooK;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct BooK
{
	int isbn;// 책의 isbn 번호  
	char title[31];//책의 제목 
	char state;//책의 상태 
	char author[11];//책을 빌린 사람 
    
};
struct Person
{
	int number;//번호  
	char name[11];//사람 이름 
	int landbookisbn[3];
    char landbooks;
};

int main(int argc, char *argv[])
{
struct BooK *a;
struct Person *b;
input(a,b);
}
