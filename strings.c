#include <stdio.h>
#include <string.h>

/*
 * Ryan Siu
 * Work 04
 * 9/28/17
 */

/* Functions

From the man pages:

  - The  strchr()  function returns a pointer to the first occurrence of the character c in the 
    string s.
    - function header: char *strchr(const char *s, int c)

  - The  strstr()  function finds the first occurrence of the substring needle in the string 
    haystack. The terminating null bytes ('\0') are not compared.
    - function header: char *strstr(const char *haystack, const char *needle);

*/

int main() {

  // strchr() testing
  char *s = "hello there";
  char *c = strchr(s, 'e');

  printf("Testing strchr().....\n");
  printf("String: %s\n", s);
  printf("Looking for: %c\n", *c);
  printf("Pointer of char: %p\n", c);
  printf("\nLooping through the string to find matches.....\n");
  
  while (*s) {
    printf("%c: %p\n", *s, s);
    if (s == c) {
      printf("Found!\n");
    }
    s++;
  }

  // strstr() testing
  char *haystack = "this is a line of text";
  char *needle = "line";
  char *p = strstr(haystack, needle);

  printf("\n\nTesting strstr().....\n");
  printf("Haystack: %s\n", haystack);
  printf("Needle: %s\n", needle);
  printf("Pointer of needle: %p\n", p);
  printf("\nLooping through the string to find matches.....\n");

  while (*haystack) {
    printf("%c: %p\n", *haystack, haystack);
    if (haystack == p) {
      printf("Found!\n");
    }
    haystack++;
  }

  
  return 0;
}
