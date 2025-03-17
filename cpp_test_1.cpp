#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> formatText(vector<string>& words, int maxWidth) {
    vector<string> result;
    string currentLine = "";

    for (const string& word : words) {
        // If the word itself is longer than maxWidth, put it on a line by itself
        if (word.length() > maxWidth) {
            if (!currentLine.empty()) {
                result.push_back(currentLine);
            }
            result.push_back(word);
            currentLine = ""; 
            continue;
        }

        // Check if adding the word exceeds maxWidth
        if (currentLine.empty()) {
            currentLine = word;
        } else if (currentLine.length() + word.length() + 1 <= maxWidth) {
            currentLine += " " + word;
        } else {
            result.push_back(currentLine);
            currentLine = word;
        }
    }

    // Add the last line if it's not empty
    if (!currentLine.empty()) {
        result.push_back(currentLine);
    }

    return result;
}

int main() {
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 10;

    vector<string> formattedText = formatText(words, maxWidth);

    for (const string& line : formattedText) {
        cout << line << endl;
    }

    return 0;
}
