#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
	char title[31];
	char author[11];
	int state;
	int isbn;
	int index;
} sample;

struct Person
{
	int number;
	char name[11];
	int landbookisbn[3];
	char landbooks;
};

int book_num = 3;
int person_num = 3;

FILE *book_file;
FILE *person_file;

struct Book *books;
struct Person *person;

void inputBook()
{
	book_file = fopen("book_data.txt", "r");
	while (!feof(book_file)) {
		fscanf(book_file, "%s %s %d %d %d", &sample.title, &sample.author, &sample.state, &sample.isbn, &sample.index);
		strcpy(books[sample.index].title, sample.title);
		strcpy(books[sample.index].author, sample.author);
		books[sample.index].state = sample.state;
		books[sample.index].isbn = sample.isbn;
		books[sample.index].index = sample.index;
	}
}

void printBook()
{
	for (int i = 0; i < book_num; i++) {
		printf("%s %s %d %d %d\n", books[i].title, books[i].author, books[i].state, books[i].isbn, books[i].index);
	}
}

int main()
{
	books = malloc(sizeof(struct Book) * book_num);
	person = malloc(sizeof(struct Person) * person_num);

	inputBook();
	printBook();

	return 0;
}
