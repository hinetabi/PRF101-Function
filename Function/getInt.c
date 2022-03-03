 /* Robust Input Validation
 *  getInt.c
 *  Oct 6 2004
 *  BTP100
 */
 #include <stdio.h>
 #define MIN 3
 #define MAX 15
 
 int getInt(int min, int max);
 void clear(void);


 int main( ) {
     int input;

     input = getInt(MIN, MAX);
     printf("\nProgram accepted %d\n", input);

     return 0;
 }

 /* getInt accepts from the standard input
 *  stream an int between min and max inclusive,
 *  returns the value of the int accepted
 */
 int getInt(int min, int max) {
     int value, keeptrying = 1, rc;
     char after;
     do {
         printf("Enter a whole number\n in the range [%d,%d] : ",
                min, max);
         rc = scanf("%d%c", &value, &after);
         if (rc == 0) {
             printf("**No input accepted!**\n\n");
             clear();
         } else if (after != '\n') {
             printf("**Trailing characters!**\n\n"); 
             clear();
         } else if (value < min || value > max) {
             printf("**Out of range!**\n\n");
         } else
             keeptrying = 0;
     } while (keeptrying == 1);

     return value;
 }

 /* clear empties input buffer of characters */ 
 void clear (void) {

     while ( getchar() != '\n' )
         ;  /* null statement intentional */
 }
