// Jiacheng Jiang
// cs 132 Jan 5


#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {
       
    
    
    int wordSize = 0;

    cout << "Formal name: Jiacheng Jiang\n";
    cout << "Preferred name: Jiacheng Jiang\n";
    cout << "Learn more about data structures and be familiar with c++\n";
    
    for (int i = 0; i < 50; i++)
    {
        cout << '*';
    }
    cout << endl;

    cout << "What size word do you want?\n";
        
    cout << "please enter a number as the size of the word(1-30): ";
    
    cin >> wordSize;

    if (wordSize < 1 || wordSize > 30)
    {
        cout << "Invalid input, number should between 1 to 30\n";
        exit(0);
    }
     
   

    ifstream inputFile;
    string word;
    int counter = 0;

    // Find the number of words that have the same size as input value
    inputFile.open("WordList.txt");

    while (inputFile >> word)
    {
        if (wordSize == word.length())
            counter++;
    }
    cout << "There are " << counter <<  " of word(s) at that size";


    inputFile.close();


   
    // store same size words into a vector
    vector<string> str;

    inputFile.open("WordList.txt");

    while (inputFile >> word)
    {
       
        if (word.length() == wordSize)
        {            
            str.push_back(word);
        }
    }
    
    inputFile.close();

   
    // write words backward into a file

    ofstream outputFile;
    outputFile.open("WordFile2.txt");

    for (int i = str.size() - 1; i >= 0; i--)
    {
        outputFile << str[i] << endl;
    }
    outputFile.close();

    cout << endl;
    

    // Find the largest word in the list

    inputFile.open("WordList.txt");

    string largestWord;

    while (inputFile >> word)
    {
        int largest = 0;
        
        if (word.length() > largest)
            largestWord = word;
    }

    cout << "The largest word in the list is " << largestWord << endl;
    
    

    return 0;
}