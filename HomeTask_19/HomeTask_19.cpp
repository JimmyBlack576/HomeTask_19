#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int var,jzp,late=0,countlate,string,rzp;
    
    
    cout << "Выберите интересующий пункт меню: \n\n"
        << "1. Узнать сколько строк кода вам нужно написать \n"
        << "2. Узнать сколько раз вы можете опоздать \n"
        << "3. Узнать сколько составит ваша заработная плата \n";
    cin >> var;

    switch (var) {
    case 1:
        cout << "Введите желаемый доход ($): \n";
        cin >> jzp;
        cout << "Введите количество опозданий: \n";
        cin >> late;
        countlate = (late / 3 * 20);
        string = (jzp + countlate) / 0.5;
        cout << string <<" строк кода нужно написать с учётом опозданий! \n";
        break;

    case 2:
        cout << "Введите желаемый доход ($): \n";
        cin >> jzp;
        cout << "Введите количество уже написанных строк кода: \n";
        cin >> string;
        rzp = string * 0.5;
        if (rzp < jzp) {
            cout << "Опаздывать недопустимо!";
        }
        else cout << (rzp - jzp) / 20 * 3;
        break;

    case 3:
        cout << "Введите количество уже написанных строк кода: \n";
        cin >> string;
        cout << "Введите количество опозданий: \n";
        cin >> late;
        countlate = (late / 3 * 20);
        rzp = string * 0.5;
        if (rzp - countlate <= 0) { cout << "Вам не заплатят ничего! \n"; }
        else cout << rzp - countlate << " $  вы заработали!\n";
        break;

    default:
        cout << "Нет такого пункта в меню! \n";
        break;       
    }
}

