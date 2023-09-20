#include <stdio.h>
#include <string.h>

int main() {
    char hello[16] = "Hello";  //	結合先
    char world[] = "World";    //	結合文字列

    strcat(hello, world);

    printf("%s", hello);
    return 0;
}