#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
#define INITIAL_CAPACITY 2

typedef struct {
    int *elems;
    int length;
    int capacity;
} DynArray;

void mem_error() {
    fprintf(stderr, "Error: cannot allocate memory");
    exit(1);
}

DynArray * da_create() {
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL)
    {
        mem_error();
    }

    result->elems = malloc(INITIAL_CAPACITY * sizeof(int));
    if (result->elems == NULL)
    {
        mem_error();
    }
    result->length = 0;
    result->capacity = INITIAL_CAPACITY;
    
    return result;
}

void da_append(DynArray *self, int data) {
    if (self->length == self->capacity)
    {
        int new_capacity = (int)(2 * self->capacity);
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        if (self->elems == NULL)
        {
            mem_error();
        }
        self->capacity = new_capacity;
    }
    self->elems[self->length] = data;
    self->length += 1;
}

void * da_destroy(DynArray *self) {
    free(self->elems);
    free(self);
    return NULL;
}

void da_rendez(DynArray *self)
{
    for (int i = 0; i < self->length - 1; i++)
    {
        for (int j = 0; j < self->length - i - 1; j++)
        {
            if (self->elems[j] > self->elems[j+1])
            {
                int tmp = self->elems[j];
                self->elems[j] = self->elems[j+1];
                self->elems[j+1] = tmp;
            }
        }
    }
}

int main()
{
    DynArray *szamok = da_create();
    
    char* nev = "millions.txt";
    FILE *in = fopen(nev, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Hiba! A(z) %s nevu file-t nem sikerult megnyitni!\n", nev);
        exit(1);
    }

    char sor[MAX];
    while (fgets(sor, MAX, in) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        int szam = atoi(sor);
        da_append(szamok, szam);
    }
    fclose(in);

    da_rendez(szamok);

    for (int i = 0; i < szamok->length; i++)
    {
        printf("%d ", szamok->elems[i]);
    }
    
    return 0;
}