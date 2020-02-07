#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
	char title[50];
	char author[50];
	int ISBN;
	char publisher[50];
	int year_of_publications;
	int t;
	
};
int main()
{
	int ch;
	struct book book1;
	gets(book1.title);
	
	printf("enter a book title:\n");
	scanf("%s",book1.title);
	fflush(stdin);
	printf("enter book's author:\n");
	scanf("%s",&book1.author);
	fflush(stdin);
	printf("enter book's ISBN:");
	scanf("%d",&book1.ISBN);
	printf("enter books publisher:");
	scanf("%s",&book1.publisher);
	
	
	printf("======");
	printf("\n\t MENU");
	printf("\n\t[1] insert data");
	printf("\n\t[2] update data");
	printf("\n\t[3] delete data");
	printf("\n\t[4] print all the information");
	printf("\n\n\t enter your choice");
	scanf("%d",&ch);
	switch (ch)
	{
	case 1:
		printf("enter year of publication:");
	scanf("%d",&book1.year_of_publications);
	break;
	case 2:
		printf("=====MENU=====");
		printf("\n\t[5] book's title");
	printf("\n\t[6] book's author");
	printf("\n\t[7] book's ISBN");
	printf("\n\t[8] book's publisher");
	printf("\n\n\t enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 5:
		printf("book's title:");
		scanf("%s",book1.title);
		break;
	case 6:
		printf(" book's author:");
		scanf("%s",&book1.author);
		break;
	case 7:
		printf("book's ISBN:");
		scanf("%d",&book1.ISBN);
		break;
	case 8:
		printf("book's publisher:");
		scanf("%s",&book1.publisher);
		break;
	}
	break;
	case 3:
		printf("=====MENU=====");
		printf("\n\t[9] book's title");
	printf("\n\t[10] book's author");
	printf("\n\t[11] book's ISBN");
	printf("\n\t[12] book's publisher");
	printf("\n\n\t enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 9:
		printf("book's title is deleted");
		break;
	case 10:
		printf("book's author name is deleted");
		break;
		case 11:
		printf("book's isbn number is deleted");
		break;
		case 12:
		printf("book's publisher name is deleted");
		break;
	}
	break;
	case 4:
		printf("book's title:%s\n",book1.title);
		printf(" book's author:%s\n",book1.author);
		printf("book's ISBN:%d\n",book1.ISBN);
		printf("book's publisher:%s\n",book1.publisher);
			break;
	}
     printf("book's title:%s\n",book1.title);
	    printf("enter year of publication:%d\n",book1.year_of_publications);
	
		printf(" book's author:%s\n",book1.author);
		printf("book's ISBN:%d\n",book1.ISBN);
		printf("book's publisher:%s\n",book1.publisher);

	getch();
	return 0;
}
