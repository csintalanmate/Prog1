#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 2

typedef struct {
    int *elems;    
    int length;    
    int capacity;  
                   
} DynArray;

void mem_error_exit()
{
    fprintf(stderr, "Error: cannot allocate memory\n");
    exit(1);
}

DynArray * da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL)
    {
        mem_error_exit();
    }

    int initial_capacity = 2;

    result->elems = malloc(initial_capacity * sizeof(int));
    if (result->elems == NULL)
    {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = initial_capacity;

    return result;
}

void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = 2 * self->capacity;
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        if (self->elems == NULL)
        {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }
    self->elems[self->length] = data;
    self->length += 1;
}

void * da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    return NULL;
}

void da_clear(DynArray *self)
{
    self->length = 0;
    self->elems = realloc(self->elems, INITIAL_CAPACITY * sizeof(int));
    if (self->elems == NULL)
    {
        mem_error_exit();
    }
    self->capacity = INITIAL_CAPACITY;
}

int da_sum(const DynArray *self)
{
    int osszeg = 0;
    for (int i = 0;i < self->length;++i)
    {
        osszeg = osszeg + self->elems[i];
    }
    return osszeg;
}

double da_average(const DynArray *self)
{
    int osszeg = da_sum(self);
    double atlag = osszeg / self->length;
    return atlag;
}


int main()
{
    DynArray *li = da_create();

    da_append(li, 3);
    da_append(li, 4);
    da_append(li, 2);
    da_append(li, 1);
    da_append(li, 9);

    for (int i = 0;i < li->length;++i)
    {
        printf("%d ", li->elems[i]);
    }
    puts("");

    da_clear(li);

    da_append(li, 4);
    da_append(li, 2);
    da_append(li, 0);

    for (int i = 0;i < li->length;++i)
    {
        printf("%d ", li->elems[i]);
    }
    puts("");

    li = da_destroy(li);

    return 0;
}