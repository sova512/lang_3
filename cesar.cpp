#include <iostream>

#include <locale>
using namespace std;
wstring encrypt(const std::wstring& text, const int key)

{
    int key1=key,i,len;
    wstring text1=text;
    wstring shifr;
    len=text1.length();
    wcout<<len<<endl;
    for(i=0; i< len; i++) {

        if ((text1[i]+key1) > L'Я')
        shifr += text1[i]+key1-32;
else
    shifr +=text1[i]+key1;
    } 
return shifr;
}
int main()
{
    locale loc("ru_RU.UTF-8");
    locale::global(loc); // установка глобальной локали
    int key;
    wstring text=L"Яблоко";
    wstring text2 = L"";
    wstring untext;
 for(wchar_t & text1: text) {
        text2 += toupper(text1,loc);
    }
    cin>>key;
//wcout << text2 << endl;
    untext=encrypt(text2,key);
    
    wcout<<L"Начальное:"<<text<<endl;
    wcout<<L"Зашифрованное:"<<untext<<endl;
    return 0;
}
