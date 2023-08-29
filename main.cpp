#include "std_lib_facilities.h"

int main()
{
    string word{};
    vector <string> words{};
    cout << "Enter a word: ";
    while (cin >> word) {
        if (word == "-1") {
            break;
        }
        words.push_back(word);
        sort(words);
        cout << "String vector so far: ";
        for (string i : words) {
            cout << i << " ";
        }
        cout << '\n';
    }
    cout << words[words.size() - 1] << " is the max of all the words.\n";
    cout << words[0] << " is the min of all the words.\n";
    //--------------------- Find Mode

    int maxCount = 0;
    string mode{};

    

    for (int i = 0; i < words.size(); ++i) {
        int count = 0;

        for (int j = 0; j < words.size(); ++j) {
            if (words[j] == words[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = words[i];
        }

    }


    if (maxCount > 1) {
        cout << "Mode: " << mode << endl;
    }
    else {
        cout << "No mode found." << endl;
    }
   

    return 0;
}
