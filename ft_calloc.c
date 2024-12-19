void *ft_calloc(size_t num, size_t size) {
    size_t total;
    char *mem;

    if (num == 0 || size == 0) {
        return NULL;
    }

    if (num && size > SIZE_MAX / num) {
        return NULL;
    }

    total = num * size;
    mem = (char *)malloc(total);
    if (mem == NULL) {
        return NULL;
    }

    char *start = mem;
    while (total > 0) {
        *mem = 0;
        mem++;
        total--;
    }

    return (void *)start;
}
