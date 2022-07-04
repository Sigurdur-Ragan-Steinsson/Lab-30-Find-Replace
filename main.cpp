#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string from;
  getline(cin, from);
  string to;
  getline(cin, to);
  string sentence;
  getline(cin, sentence);

  // change all occurrences of 'from' into 'to' in the sentence
  // Fixes if the keyword your replacing is in a word, punct. still issue
  // to fix punct maybe find all punc and add a space before it, then remove double space at end
  from += " ";
  to += " ";
  sentence += " ";
  int startIn = sentence.find(from);
  
  while(startIn <= from.length()){
    sentence.replace(startIn, from.length(), to);
    cout << sentence << "\n";
  }
  //cout << "Get good" << endl;

  //Next time use a while loop with the same condition as the startIn
} 