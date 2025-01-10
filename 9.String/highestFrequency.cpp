#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "leetcode";
    vector<int> charFrequency(26, 0);

    // Count frequency of each character
    for (char ch : s)
    {
        charFrequency[tolower(ch) - 'a']++;
    }

    // Find the maximum frequency
    int maxFrequency = 0;
    for (int frequency : charFrequency)
    {
        if (frequency > maxFrequency)
        {
            maxFrequency = frequency;
        }
    }

    // Print characters and their maximum frequency
    for (int i = 0; i < 26; i++)
    {
        if (charFrequency[i] == maxFrequency)
        {
            char ch = 'a' + i;
            cout << ch << " " << maxFrequency << endl;
        }
    }

    return 0;
}