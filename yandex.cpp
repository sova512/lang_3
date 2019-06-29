#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string d = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";//Исходная строка

    string a, b;
    cout << "Введите заменяемое слово"<<endl;
    cin >> a;//Вводим слово, которое хотим заменить
    cout << "Введите слово для замены"<<endl;
    cin >> b;//Вводим слово, на которое будем заменять
    for (int i = 0; i < d.length(); i++) {
        if (d.substr(i, a.length()) == a)
            d.replace(i, a.length(), b);
    }
    cout << d << endl;
    return 0;
}
