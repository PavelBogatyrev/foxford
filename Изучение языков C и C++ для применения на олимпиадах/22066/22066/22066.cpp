pa = (int**)malloc(100 * sizeof(int));
for (int d = 0; d < 10; ++d) {
    pa[d] = (int*)malloc(10 * sizeof(int));
}
for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; j++) {
        pa[i][j] = i * j;
    }
}