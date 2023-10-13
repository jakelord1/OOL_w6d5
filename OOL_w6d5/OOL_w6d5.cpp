#include <iostream>
#include <map>
using namespace std;




typedef pair<string, string> Mpair;
int main()
{
    setlocale(LC_ALL, " ");
    map<string, string> dictionary;
    string enter, enter2;
    int choose = 0;
    cout << "1 - Add\t2 - Delete\t3 - Find\t4 - Edit\tAny other - Exit\n";
    do {
        switch (choose) {
        case 1: {
            cin >> enter;
            cin >> enter2;
            dictionary.insert(Mpair(enter, enter2));
            break;
        }
        case 2: {
            cin >> enter;
            auto find = dictionary.find(enter);
            if (find != dictionary.end()) {
                dictionary.erase(find);
            }
            break;
        }
        case 3: {
            cin >> enter;
            auto find = dictionary.find(enter);
            if (find != dictionary.end()) {
                cout << find->first << " - " << find->second << endl;
            }
            break;
        }
        case 4: {
            cin >> enter;
            auto find = dictionary.find(enter);
            if (find != dictionary.end()) {
                cin >> enter2;
                dictionary[enter2] = enter2;
            }
            break;
        }
        default: {
            exit(0);
              }
        }
    } while (true);
}
