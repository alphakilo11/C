#include <stdio.h>

typedef struct _node {
    int element;
    struct _node *next;
} node;
typedef node *list;

/* Lösungsvariante
int list_pos(list m, int n) {
    int pos = 0;
    while (m != NULL) {
        if (m->element == n)
            return pos;
        else {
            m = m->next;
            pos++;
        } 
    }
    return -1;
}
*/

int list_pos(list m, int n) {
    int i;
    for (i = 0; m->element != n; i++) {
        if (!m->next)
            return -1;
        m = m->next;
    }
    return i;
}

int main(void)
{
    node *m;
    node eins, zwei, drei;
    eins.element = 1;
    eins.next = &zwei;
    zwei.element = 2;
    zwei.next = &drei;
    drei.element = 3;
    drei.next = NULL;

    m = &eins;
    printf("%i\n", list_pos(m, 3));
    return 0;
}
