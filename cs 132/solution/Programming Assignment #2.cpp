/* This is the primary initial file for
 * CS 132 Assignment #2.  The purpose of this file
 * is to create a simplistic encryption tool to store and
 * reload user names and passwords.   In doing so
 * the user will use stings and string manipulation.
 *
 * version 2.0
 */

// Jiacheng Jiang, CS 132, Winter 2021
// Programming Assignment #2, 1/11/21
// 
// This program can convert input password to morse code and store into certain file
// It can also check the file and try to find the morse code version of user input


#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;


void addToFile(string fname);
void checkFile(string fname);
string charToMorse(char x);
bool checkPassword(char password[]);
void makeTrim(string& x);

int main()
{
    string userPassword;
    int option;

    cout << "***************************************************************" << endl;
    cout << "Hello and welcome to the CS132 Ultra Secure Password Generator." << endl;
    cout << "***************************************************************" << endl;

    while (true)
    {
        const string fileName = "masterFile.txt";

        do
        {
            cout << "Would you like to test a password, or add a password?" << endl;
            cout << "  1 : for test a password" << endl;
            cout << "  2 : for add a password" << endl;
            cout << "  3 : to quit" << endl;
            cout << "  >>> ";

            cin >> option;
        } while (option < 1 || option > 3);


        if (option == 1)
        {
            getline(cin, userPassword);
            checkFile(fileName);
        }
        else if (option == 2)
        {
            getline(cin, userPassword);
            addToFile(fileName);
        }
        else if (option == 3)
        {
            cout << "Thank you, have a good day." << endl;
            return 0;
        }
        else
        {
            // This is an error state, this should never happen.
            cerr << "ERROR invalid option" << endl;
            return 99;

        }
          
    } // End of the while(true);

   // The program did not leave correctly.
    cerr << "ERROR illegal loop exit." << endl;
    return 100;

}

void addToFile(string fname)
{


    cout << "Add your password: " << endl;
        
    string password;

    
    getline(cin, password);
    
    
    // store password into a char array
    char *cPassword = new char[password.size() + 1];
    password.copy(cPassword, password.size() + 1);
    cPassword[password.size()] = '\0';  
    
    
    // convert password to morse code
    string morseCode;
    
    if (checkPassword(cPassword))
    {
        for (int i = 0; i < strlen(cPassword); i++)
        {
            morseCode += charToMorse(cPassword[i]);
        
        }
    }
    else
        exit(1);
    
    makeTrim(morseCode);
    
  
    // write into file
    ofstream outfile;
    outfile.open(fname, std::ios_base::app);

    // store morse code version of password into file
    outfile << morseCode << endl;

    outfile.close();

    delete[] cPassword;
    
    return;

}

void checkFile(string fname)
{
    
    cout << "Enter the password you want to check: " << endl;

    string password;
    
    getline(cin, password);

    // store password into a char array
    char* cPassword = new char[password.size() + 1];
    password.copy(cPassword, password.size() + 1);
    cPassword[password.size()] = '\0';


    // convert password to morse code
    string morseCode;

    if (checkPassword(cPassword))
    {
        for (int i = 0; i < strlen(cPassword); i++)
        {
            morseCode += charToMorse(cPassword[i]);
        }
    }
    else
        exit(1);

    // read from file
    ifstream infile;
    infile.open(fname);

    string storedPassword;

    // check if password exists in the file or not
    bool found = false;
    while (infile >> storedPassword)
    {
        if (morseCode == storedPassword)
        {
            found = true;
        }
        else
            found = false;
    }

    if (found)
        cout << "your password was found in the file!\n";
    else
        cout << "didn't find your password in the file!\n";

    infile.close();

    delete[] cPassword;
    
    return;
}



// convert char to morse code
string charToMorse(char letter)
{
    
    letter = tolower(letter);
    if (letter == 'a')
        return "*-";
    else if (letter == 'b')
        return "-***";
    else if (letter == 'c')
        return "-*-*";
    else if (letter == 'd')
        return "-**";
    else if (letter == 'e')
        return "*";
    else if (letter == 'f')
        return "**-*";
    else if (letter == 'g')
        return "--*";
    else if (letter == 'h')
        return "****";
    else if (letter == 'i')
        return "**";
    else if (letter == 'j')
        return "*---";
    else if (letter == 'k')
        return "-*-";
    else if (letter == 'l')
        return "*-**";
    else if (letter == 'm')
        return "--";
    else if (letter == 'n')
        return "-*";
    else if (letter == 'o')
        return "---";
    else if (letter == 'p')
        return "*--*";
    else if (letter == 'q')
        return "--*-";
    else if (letter == 'r')
        return "*-*";
    else if (letter == 's')
        return "***";
    else if (letter == 't')
        return "-";
    else if (letter == 'u')
        return "**-";
    else if (letter == 'v')
        return "***-";
    else if (letter == 'w')
        return "*--";
    else if (letter == 'x')
        return "-**";
    else if (letter == 'y')
        return "-*--";
    else if (letter == 'z')
        return "--**";
    else if (letter == '0')
        return "-----";
    else if (letter == '1')
        return "*----";
    else if (letter == '2')
        return "**---";
    else if (letter == '3')
        return "***--";
    else if (letter == '4')
        return "****-";
    else if (letter == '5')
        return "*****";
    else if (letter == '6')
        return "-****";
    else if (letter == '7')
        return "--***";
    else if (letter == '8')
        return "---**";
    else if (letter == '9')
        return "----*";
    else if (letter == ',')
        return "--**--";
    else if (letter == '.')
        return "*-*-*-";
    else if (letter == '?')
        return "**--**";
    else if (letter == ' ')
        return "/";

    else
        return "letter cannot convert to morse code.";
}


// validate the password
bool checkPassword(char password[])
{
    // check length
    if (strlen(password) < 10)
    {
        cout << "The password must be at least 10 characters!";
        return false;
    }
   

    int letter = 0;
    int num = 0;
    int symbol = 0;
    int i = 0;

    // check number of letters, numbers and symbol
    while(password[i] != '\0')
    {

        if (isalpha(password[i]))
        {
            letter++;
        }
        else if (isalnum(password[i]))
        {
            num++;
        }
        else if (password[i] == '.' || password[i] == '?' ||
            password[i] == ',' || password[i] == ' ')
        {
            symbol++;
        }
        i++;
    }


    if (letter < 8)
    {
        cout << "password must contain at least 8 letters!";
        return false;
    }
    if (num < 4)
    {
        cout << "password must contain at least 4 numbers!";
        return false;
    }
    if (symbol < 1) 
    {
        cout << "password must contain at least 1 symbol!";
        return false;
    }
    return true;
}



void makeTrim(string& x)
{
    const char* ws = " \t\n\r\f\v";
    x.erase(0, x.find_first_not_of(ws));
    x.erase(x.find_last_not_of(ws) + 1);
}