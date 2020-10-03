#include <stdio.h>

struct student {

    int STD_ID;
    char Name[];
    int mark;

}st[2];

void insertmark(int);
hmark(void);

int main(void) {
    for(int i=0;i<2;i++) {

        insertmark(i);
        printf("\n");

    }

    hmark();

    return 0;
}


void insertmark(int x) {

        printf("Enter STD ID: ");
        scanf("%d", &st[x].STD_ID);

        printf("Enter Name: ");
        scanf("%s", &st[x].Name);

        printf("Enter Mark: ");
        scanf("%d", &st[x].mark);

}

void hmark() {

    int min = st[0].mark;

    for(int i=0;i<2;i++) {

        if(min>st[i].mark) {

            min = st[i].mark;

            printf("who got the lowest marks\n");
            printf("Student ID: %d\n", st[i].STD_ID);
            printf("Student Name%s\n", st[i].Name);
            printf("Marks: %d\n", min);

        }

    }

}
