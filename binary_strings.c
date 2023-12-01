#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReplaceString(char *str, int spot) {
  /*
  ReplaceString is a recursive function that takes a string and index and goes
through the string replacing all x's with 0's and 1's to print all possibilities
of the binary strings.
@str: a pointer to a char array (a string) that we need to find all
possibilities for
@spot: the current spot or index we are at in the string
@returns: nothing, answers are printed in function
*/
  if (str[spot] == '\0') {
    /*base case: checks if we have reached the end of the string
    if so then print, and return
*/
    printf("%s\n", str);
    return;
  }
  if (tolower(str[spot]) == 'x') {
    /* If we have reached an x, then we replace it with a 0 and call the
     * function again with the next index.*/
    str[spot] = '0';
    ReplaceString(str, spot + 1);
    /* After trying it with a 0, we replace it with a 1 and call the function
     * again with the next index. */
    str[spot] = '1';
    ReplaceString(str, spot + 1);
    /*Replace the spot we're at with x so we can backtrack with the original
     * string to reach all possibilities. */
    str[spot] = 'X';
    return;
  } else {
    ReplaceString(str, spot + 1);
  }
}

int main(int argc, char **argv) {
  /*Function takes in a string and prints all possible binary strings with x's
  in it by calling the recursive function: ReplaceString.
  @argc: the number of arguments
  @argv: The actual arguments
  @returns: 0 if ran sucessfully, another number otherwise
*/

  ReplaceString(argv[1], 0);
  return 0;
}

/*
int main(){
        char* str = (char*)malloc(4*sizeof(char));
        str[0] = '1';
        str[1] = 'x';
        str[2] = '0';
        str[3] = 'x';
        ReplaceString(str, 0);
        return 0;


}
*/