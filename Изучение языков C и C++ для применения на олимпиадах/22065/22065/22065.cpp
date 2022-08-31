pa = (int*)malloc(400);
free(pa);
for (int i = 0; i < 100; ++i) {
    pa[i] = i + 1;
}