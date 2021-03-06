## This program is designed to simply get you back into the C++ mind frame and refresh your skills, so do not overdo it or assume that there is anything tricky going on.

Make sure to comment/header all files.

Write a C++ program that does the following:

- Outputs your formal name.
- Outputs your preferred name to be called.  (This may be the same as above)
- Outputs what would you like to learn in this class?
- Then print a line of 50 or more stars("*") as a break between sections. 
- Asks the user the following question and wait for a number answer.
  - "What size word do you want?"
  - Make sure that they input a number between 1 and 30.
    - Use an input validation loop.
- Open up the file : [WordList.txt](https://github.com/spizzkid/cplusplusPractice/blob/master/cs%20132/problems/WordList.txt)
  - This file contains a large number (> 150000) of single English words.
- Count how many words there are of that length and print it out.
  - In order to find the size of a string
    - #include \<string>
    - Then use strname.length() to get the length of a string.
      - For example x = myString.length();
- Close the file.
- Create an array the size of your count, or create a vector.
  - For an array, you will need to use a pointe to get it of the correct size.
- Reopen the WordList.txt file.
- Read all the words of that are the same size as the indicated size into the array/vector.
- Write all the words from that array onto the screen AND into a file backward.  
  - The file name should be WordFile2.txt 
  - So for example,
    - if the user selected words of size 3, then I  should see "ZOO" before I see "AND".
- Close both files.
- Open the original file one more time.
- Find the largest word in the list and print it out.
 
