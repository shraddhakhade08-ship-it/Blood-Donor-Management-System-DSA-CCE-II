#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string title;
    Node* child;
    Node* sibling;

    Node(string t)
    {
        title = t;
        child = NULL;
        sibling = NULL;
    }
};

int main()
{
    string book;
    int chapters;

    cout << "Enter Book Name: ";
    getline(cin, book);

    cout << "Enter Number of Chapters: ";
    cin >> chapters;
    cin.ignore();

    cout << "\nBook: " << book << endl;

    for (int i = 1; i <= chapters; i++)
    {
        string chapter;
        int sections;

        cout << "\nEnter Chapter " << i << " Name: ";
        getline(cin, chapter);

        cout << "Enter Number of Sections: ";
        cin >> sections;
        cin.ignore();

        cout << "\nChapter " << i << ": " << chapter << endl;

        for (int j = 1; j <= sections; j++)
        {
            string section;
            int subsections;

            cout << "Enter Section " << i << "." << j << " Name: ";
            getline(cin, section);

            cout << "Enter Number of Subsections: ";
            cin >> subsections;
            cin.ignore();

            cout << "Section " << i << "." << j
                 << ": " << section << endl;

            for (int k = 1; k <= subsections; k++)
            {
                string sub;

                cout << "Enter Subsection "
                     << i << "." << j << "." << k << " Name: ";
                getline(cin, sub);

                cout << "    " << i << "." << j << "." << k
                     << " " << sub << endl;
            }
        }
    }

    return 0;
}

