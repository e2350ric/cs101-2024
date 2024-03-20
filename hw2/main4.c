#include <stdio.h>

typedef struct {
    char title[100];
    char id[100];
    int price;
} Book;


void total_price(Book books[], int num_books) {
    int total = 0;
    for (int i = 0; i < num_books; i++) {
        total += books[i].price;
    }
    printf("Total Price: %d\n", total);
}

void list_books(Book books[], int num_books) {
    printf("Book List:\n");
    printf("id price book\n");
    for (int i = 0; i < num_books; i++) {
        printf("%s", books[i].id);
        printf(" %d", books[i].price);
        printf(" %s", books[i].title);
        printf("\n");
    }
}

int main() {
    Book books[] = {
        {"All the Light We cannot see","1",1000},
        {"The 38 Letters from J.D. Rockefeller to his son","2",300},
        {"The ballad of Songbirds and Snakes","3",1000},
        {"Killer of the Flower Moon","4",550},
        {"Elon Musk","5",870},
        {"Milk and Honey 12-Month 2024","6",1344}
    };
    int num_books = sizeof(books) / sizeof(books[0]);
    total_price(books, num_books);
    list_books(books, num_books);
    printf("\n");
    return 0;
}
