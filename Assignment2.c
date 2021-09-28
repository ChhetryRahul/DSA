#include <stdio.h>
#include <stdlib.h>

struct Student{
    int roll;
    float marks;
};

int main()
{
    struct Student* s;
    s = (struct Student *)malloc(sizeof(struct Student));
    s->roll = 11;
    s->marks = 70.0f;
    printf("%d\n",s->roll);
    printf("%.2f",s->marks);
    return 0;
}


