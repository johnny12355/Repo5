#include <iostream>

int main() {
    using namespace std;
    cout << "Któryż dziś jest dzień w tygodniu? Podaj numer!" << endl;
    int numerDnia;
    cin >> numerDnia;
    cout << "Podany dzień,  to dzień oooo numerze:   : " << numerDnia << endl;
    cout << "Nazwa dnia, który wybrałeś to: ";
    switch (numerDnia) {
        case 1: cout << "Poniedziałek";
            break;
        case 2: cout << "Wtorek";
            break;
        case 3: cout << "Środa";
            break;
        case 4: cout << "Czwartek";
            break;
        case 5: cout << "Piątek";
            break;
        case 6: cout << "Sobota";
            break;
        case 7: cout << "Niedziela";
            break;
        default: cout << "Error! Tydzień ma tylko siedem dni, Ty nicponiu!" << endl;
            break;
    }
    cout << '\n';
    cout << "   ...wciśnij dowolny klawisz i zatwierdź enterem, aby kontynuować wyświetlanie dni tygodnia...";
    int Smietnik;
    cin >> Smietnik;
    cout << "Oto lista dni tygodnia: \n ";
    for (numerDnia = 1; numerDnia < 8; numerDnia++)
        switch (numerDnia){
            case 1: cout << "Poniedziałek \n";
                break;
            case 2: cout << "Wtorek  \n";
                break;
            case 3: cout << "Środa \n";
                break;
            case 4: cout << "Czwartek \n";
                break;
            case 5: cout << "Piątek \n";
                break;
            case 6: cout << "Sobota \n";
                break;
            case 7: cout << "Niedziela \n";
                break;
        }
    return 0;
}