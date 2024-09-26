#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");
    int dM, dW;
    cout << "Введите дату: \n";
    cout << "\tДень месяца: ";
    cin >> dM;
    cout << "\tНомер дня в неделе: ";
    cin >> dW;
    if ((13 == dM) && (5 == dW || 2 == dW) || (dM == 17 && dW == 5))
        cout << "неудачный день\n";
    return 0;
}
