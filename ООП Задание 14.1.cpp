// Напишите предикат, который сравнивает две строки и возвращает true, если первая короче второй. 
// Используйте его в алгоритме sort для сортировки вектора строк в порядке возрастания длины.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a1, string a2) {
    return a1.length() < a2.length();
}

int main()
{
    setlocale(LC_ALL, "ru");
    string str1, str2;

    cout << "Напишите первую строку для сравнения:\n";
    getline(cin, str1);
    cout << "Напишите вторую строку для сравнения:\n";
    getline(cin, str2);

    vector<string> vec{ str1, str2 };

    sort(vec.begin(), vec.end(), cmp);

    cout << "\nВывод строк в порядке возростания:\n";
    for (string s : vec) {
        cout << s << endl;
    }
}