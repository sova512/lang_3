#include <iostream>

#include <locale>
using namespace std;
wstring decrypt(const wstring text, const int key)
{
    wstring s = L"";
    for (wchar_t c : text) {
        if (!(c>= L'А' && c<=L'Я')) return L"-1";
    if ((c+key) > L'Я')
            unshifr += c-key+32;
        else
            unshifr +=c-key;
    
    }
    return unshifr;
}
int main()
{
    locale loc("ru_RU.UTF-8");
    locale::global(loc); // установка глобальной локали
    int key;
    wstring text=L"цчхкчзуупчхйзфпм";
    wstring text2 = L"";
    wstring untext;
 for(wchar_t & text1: text) {
        text2 += toupper(text1,loc);
    }
    cin>>key;
    untext=decrypt(text2,key);
    if(untext==(L"-1")) wcout<<L"ERROR"<<endl;
    wcout<<L"Начальное:"<<text<<endl;
    wcout<<L"Расшифрованное:"<<untext<<endl;
    return 0;
}