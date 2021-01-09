/*  CS132 Mini - programming Assignment
 *  cStrings
 *
 *  Complete the following program by writing the code
 *  for the 4 neccessary methods that are prototyped below.
 *  Do not make any changes to the main or the prototypes.
 *
 *  For this assignment you may not use the string data type.
 *
 *  Hint,  you might want write the last method first so that you
 *  can use it in the 3rd method.
 *
 *  Good luck.
 */

/*
 * Jiacheng Jiang
 * cs 132 Jan 7
 */
#include<iostream>
#include<cstring>

using namespace std;

void upperCase_cString(char a[])
{
    char* x = a;

    while (*x != '\0')
    {
        *x = toupper(*x);
        x++;
    }

};
void lowerCase_cString(char a[])
{
    char* x = a;

    while (*x != '\0')
    {
        *x = tolower(*x);
        x++;
    }
};
void reverse_cString(char a[])
{
    
    for (int i = 0; i < strlen(a) / 2; i++)
    {
        char temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }
};

int find_len_cString(char a[])
{
    int count = 0;
    char* x = a;
    while (*x != '\0')
    {
        x++;
        count++;
    }
    return count;
};


int main() {
       

    char a[] = "Hello World";
    char b[] = { 'M','i','c','k','y',' ','M','o','u','s','e','\0' };
    char c[] = "abcdefghijklmnopqrstuvwxyz";
    char d[] = "ABCDE...VWXYZ";
    char e[] = "This is a test \0 OF THE END OF STRING CHARACTER";

    cout << "BEFORE" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << endl << "AFTER" << endl << endl << endl;

    upperCase_cString(a);
    cout << a << endl;

    lowerCase_cString(b);
    cout << b << endl;

    reverse_cString(c);
    cout << c << endl;

    reverse_cString(d);
    cout << d << endl;

    reverse_cString(e);
    cout << e << endl;

    cout << find_len_cString(d) << endl;
    cout << find_len_cString(e) << endl;

  

    return 0;
}