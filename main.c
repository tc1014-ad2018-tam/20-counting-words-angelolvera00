/*This program was created for the purpose of asking the user to enter a string so that it can count how many words
 * the user entered.
 *
 * Author: Angel Daniel Olvera Perales
 * Date: October 18
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>
//Variables are declared, the count variable is where the amount of words will be stored.
char string[100000];
int count=0;
int i;

int main() {
    //The user is asked for a string.
    printf("Enter a string: \n");
    gets(string);
//For loop that will scan each character in the string and will add 1 to the count variable if it detects a space
//between words.
    for(i=0; string[i] != '\0';i++){
        if(string[i]== ' ')
            count++;
    }
//The number of words in the string is printed. Count has a +1 because at the end of the string, the user won't
//press space, they will press enter, so the program won't recognize the last space, the +1 fixes it.
    printf("Number of words in the string: %d\n", count+1);
    return 0;
}