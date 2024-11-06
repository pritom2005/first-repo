#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read the entire input sentence as a string
    string sentence;
    getline(cin, sentence);
    
    // Create a stringstream object to split the sentence into words
    stringstream ss(sentence);
    string word;
    vector<string> words;
    
    // Extract words from the stringstream and store them in the vector
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse the words in the vector
    reverse(words.begin(), words.end());
    
    // Output the reversed sentence
    for (size_t i = 0; i < words.size(); ++i) {
        cout << words[i];
        if (i != words.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
