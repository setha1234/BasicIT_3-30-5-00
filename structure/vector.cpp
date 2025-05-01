#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <string>
using namespace std;

struct BookCopy {
    int copyID;
    bool issued = false;
    int issuedTo = 0;  // 0 means not issued
};

struct TitleEntry {
    string title;
    string author;
    vector<BookCopy> copies;
};

class Library {
    map<int, TitleEntry> titles;        // TitleID -> TitleEntry
    map<int, pair<int,int>> index;      // CopyID -> (TitleID, index in copies vector)
    int nextTitleID = 1;
    int nextCopyID = 1;
    const int MAX_COPIES_PER_TITLE = 10;

public:
    void addTitle() {
        cin.ignore();
        TitleEntry entry;
        cout << "Enter book title: ";
        getline(cin, entry.title);
        cout << "Enter author name: ";
        getline(cin, entry.author);
        int num;
        cout << "Number of copies to add (1-" << MAX_COPIES_PER_TITLE << "): ";
        cin >> num;
        if (num < 1 || num > MAX_COPIES_PER_TITLE) {
            cout << "Invalid number of copies.\n";
            return;
        }
        int tid = nextTitleID++;
        for (int i = 0; i < num; ++i) {
            BookCopy bc{ nextCopyID++, false, 0 };
            entry.copies.push_back(bc);
            index[bc.copyID] = make_pair(tid, i);
        }
        titles[tid] = entry;
        cout << "Added " << num << " copies of '" << entry.title << "'.\n";
    }

    void displayAll() const {
        if (titles.empty()) {
            cout << "No titles in library.\n";
            return;
        }
        cout << left << setw(8) << "CopyID"
             << setw(30) << "Title"
             << setw(25) << "Author"
             << setw(10) << "IssuedTo" << "\n";
        cout << string(75, '-') << "\n";
        for (auto const &t : titles) {
            const auto &entry = t.second;
            for (auto const &bc : entry.copies) {
                cout << left << setw(8) << bc.copyID
                     << setw(30) << entry.title
                     << setw(25) << entry.author;
                if (bc.issued) cout << setw(10) << bc.issuedTo;
                else cout << setw(10) << "-";
                cout << "\n";
            }
        }
    }

    void issueCopy() {
        int cid, mid;
        cout << "Enter copy ID to issue: ";
        cin >> cid;
        auto it = index.find(cid);
        if (it == index.end()) {
            cout << "Invalid copy ID.\n";
            return;
        }
        cout << "Enter member ID: ";
        cin >> mid;
        auto &p = it->second;
        auto &bc = titles[p.first].copies[p.second];
        if (bc.issued) {
            cout << "Copy " << cid << " already issued to " << bc.issuedTo << ".\n";
        } else {
            bc.issued = true;
            bc.issuedTo = mid;
            cout << "Copy " << cid << " issued to member " << mid << ".\n";
        }
    }

    void returnCopy() {
        int cid;
        cout << "Enter copy ID to return: ";
        cin >> cid;
        auto it = index.find(cid);
        if (it == index.end()) {
            cout << "Invalid copy ID.\n";
            return;
        }
        auto &p = it->second;
        auto &bc = titles[p.first].copies[p.second];
        if (!bc.issued) {
            cout << "Copy " << cid << " is not issued.\n";
        } else {
            cout << "Copy " << cid << " returned by member " << bc.issuedTo << ".\n";
            bc.issued = false;
            bc.issuedTo = 0;
        }
    }
};

int main() {
    Library lib;
    int choice;
    do {
        cout << "\nLibrary Management System\n"
             << "1. Add Title and Copies\n"
             << "2. Display All Copies\n"
             << "3. Issue Copy\n"
             << "4. Return Copy\n"
             << "0. Exit\n"
             << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: lib.addTitle(); break;
            case 2: lib.displayAll(); break;
            case 3: lib.issueCopy(); break;
            case 4: lib.returnCopy(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
    return 0;
}

