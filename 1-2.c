#define TRUE 0 
#define FALSE 1 

int smaller(char *p, char *q) {
    if (strcmp(p, q) == 0) {
        return TRUE;
    }
    else  return FALSE;
}