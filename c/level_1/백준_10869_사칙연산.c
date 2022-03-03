#include <stdio.h>
 
int main(int argc, char const *argv[]) {
    int a, b;
 
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a + b);  // µ¡¼À
    printf("%d\n", a - b);  // »¬¼À
    printf("%d\n", a * b);  // °ö¼À
    printf("%d\n", a / b);  // ³ª´°¼À (¸ò)
    printf("%d\n", a % b);  // ³ª´°¼À (³ª¸ÓÁö)
    return 0;
}
