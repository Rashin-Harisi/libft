#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define TEST(name, condition) \
    printf("[%s] %s\n", (condition) ? "PASS ✅" : "FAIL ❌", name)

/* Helper to compare strings safely */
int str_eq(const char *a, const char *b) {
    if (!a || !b) return 0;
    return strcmp(a, b) == 0;
}
void ft_plus_i(unsigned int i, char *c){
    *c += i; 
}
char ft_upper(unsigned int i, char c){ 
    (void)i; 
    return (c >= 'a' && c <= 'z') ? c - 32 : c; 
}


int main(void) {
    printf("=========== LIBFT TESTS BEGIN ===========\n\n");

    /* ---------- ft_strlen ---------- */
    TEST("ft_strlen('Hello')", ft_strlen("Hello") == 5);
    TEST("ft_strlen('')", ft_strlen("") == 0);

    /* ---------- ft_isalpha ---------- */
    TEST("ft_isalpha('A')", ft_isalpha('A') != 0);
    TEST("ft_isalpha('1')", ft_isalpha('1') == 0);

    /* ---------- ft_isdigit ---------- */
    TEST("ft_isdigit('5')", ft_isdigit('5') != 0);
    TEST("ft_isdigit('a')", ft_isdigit('a') == 0);

    /* ---------- ft_isalnum ---------- */
    TEST("ft_isalnum('Z')", ft_isalnum('Z') != 0);
    TEST("ft_isalnum('#')", ft_isalnum('#') == 0);

    /* ---------- ft_isascii ---------- */
    TEST("ft_isascii(65)", ft_isascii(65) != 0);
    TEST("ft_isascii(200)", ft_isascii(200) == 0);

    /* ---------- ft_isprint ---------- */
    TEST("ft_isprint(' ')", ft_isprint(' ') != 0);
    TEST("ft_isprint(10)", ft_isprint(10) == 0);

    /* ---------- ft_toupper / ft_tolower ---------- */
    TEST("ft_toupper('a')", ft_toupper('a') == 'A');
    TEST("ft_tolower('Z')", ft_tolower('Z') == 'z');

    /* ---------- ft_atoi ---------- */
    TEST("ft_atoi('42')", ft_atoi("42") == 42);
    TEST("ft_atoi('-2147483648')", ft_atoi("-2147483648") == INT_MIN);
    TEST("ft_atoi('   +1234abc')", ft_atoi("   +1234abc") == 1234);

    /* ---------- ft_memset ---------- */
    char mem1[5] = "abcd";
    ft_memset(mem1, 'x', 3);
    TEST("ft_memset('abcd', 'x', 3)", mem1[0] == 'x' && mem1[2] == 'x' && mem1[3] == 'd');

    /* ---------- ft_bzero ---------- */
    char bz[5] = "test";
    ft_bzero(bz, 4);
    TEST("ft_bzero", bz[0] == 0 && bz[3] == 0);

    /* ---------- ft_memcpy ---------- */
    char src1[] = "Hello";
    char dst1[10];
    ft_memcpy(dst1, src1, 6);
    TEST("ft_memcpy", str_eq(dst1, "Hello"));

    /* ---------- ft_memmove ---------- */
    char move1[] = "abcdef";
    ft_memmove(move1 + 2, move1, 4);
    TEST("ft_memmove overlap", strncmp(move1, "ababcd", 6) == 0);

    /* ---------- ft_memchr ---------- */
    char *mc = ft_memchr("hello", 'l', 5);
    TEST("ft_memchr('hello', 'l')", mc && *mc == 'l');

    /* ---------- ft_memcmp ---------- */
    TEST("ft_memcmp('abc','abd',2)", ft_memcmp("abc", "abd", 2) == 0);
    TEST("ft_memcmp('abc','abd',3)", ft_memcmp("abc", "abd", 3) < 0);

    /* ---------- ft_strchr / ft_strrchr ---------- */
    TEST("ft_strchr('hello','l')", *ft_strchr("hello", 'l') == 'l');
    TEST("ft_strrchr('hello','l')", *ft_strrchr("hello", 'l') == 'l');

    /* ---------- ft_strncmp ---------- */
    TEST("ft_strncmp('abc','abd',2)", ft_strncmp("abc","abd",2) == 0);
    TEST("ft_strncmp('abc','abd',3)", ft_strncmp("abc","abd",3) < 0);

    /* ---------- ft_strnstr ---------- */
    TEST("ft_strnstr('hello world','world',11)", str_eq(ft_strnstr("hello world","world",11),"world"));
    TEST("ft_strnstr('hello','x',5)", ft_strnstr("hello","x",5) == NULL);

    /* ---------- ft_strlcpy / ft_strlcat ---------- */
    char dcpy[10]; ft_strlcpy(dcpy,"Hello",10);
    TEST("ft_strlcpy", str_eq(dcpy,"Hello"));
    char dcat[15] = "Hi "; ft_strlcat(dcat,"there",15);
    TEST("ft_strlcat", str_eq(dcat,"Hi there"));

    /* ---------- ft_strdup ---------- */
    char *dup = ft_strdup("copyme");
    TEST("ft_strdup", str_eq(dup,"copyme"));
    free(dup);

    /* ---------- ft_calloc ---------- */
    int *nums = ft_calloc(4, sizeof(int));
    TEST("ft_calloc zero init", nums && nums[0] == 0);
    free(nums);

    /* ---------- ft_substr ---------- */
    char *sub = ft_substr("libft", 2, 3);
    TEST("ft_substr", str_eq(sub,"bft"));
    free(sub);

    /* ---------- ft_strjoin ---------- */
    char *joined = ft_strjoin("Hello", "World");
    TEST("ft_strjoin", str_eq(joined,"HelloWorld"));
    free(joined);

    /* ---------- ft_strtrim ---------- */
    char *trim = ft_strtrim("xxHellox", "x");
    TEST("ft_strtrim", str_eq(trim,"Hello"));
    free(trim);

    /* ---------- ft_split ---------- */
    char **split = ft_split("a,b,c", ',');
    TEST("ft_split", str_eq(split[0],"a") && str_eq(split[1],"b") && str_eq(split[2],"c"));
    for(int i=0; split[i]; i++) free(split[i]);
    free(split);

    /* ---------- ft_itoa ---------- */
    char *itoa1 = ft_itoa(42);
    char *itoa2 = ft_itoa(-2147483648);
    TEST("ft_itoa(42)", str_eq(itoa1,"42"));
    TEST("ft_itoa(-2147483648)", str_eq(itoa2,"-2147483648"));
    free(itoa1); free(itoa2);

    /* ---------- ft_strmapi ---------- */
    
    char *mapped = ft_strmapi("abc", ft_upper);
    TEST("ft_strmapi to upper", str_eq(mapped,"ABC"));
    free(mapped);

    /* ---------- ft_striteri ---------- */
   
    char iteri_str[] = "abcd";
    ft_striteri(iteri_str, ft_plus_i);
    TEST("ft_striteri modifies", iteri_str[1] == 'b' + 1);

    /* ---------- ft_putchar_fd / ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd ---------- */
    printf("\nTesting output functions (you should see lines below):\n");
    ft_putchar_fd('A', 1);
    ft_putstr_fd("BCD", 1);
    ft_putendl_fd(" END", 1);
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    printf("\n\n=========== LIBFT TESTS END ===========\n");
    return 0;   
}
