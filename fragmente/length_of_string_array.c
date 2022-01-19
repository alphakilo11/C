int count_strings(char **bar) {
    int count = 0;
    while (*bar != '\0') {
        count++;
        *bar++;
    }
    return count;
}
