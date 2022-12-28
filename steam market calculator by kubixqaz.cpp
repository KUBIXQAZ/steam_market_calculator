//app made by kubixqaz//
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct main;

int main()
{
    system("cls");
    system("color 07");

    int amount;
    float price;
    float selling_for;

    float tax_fee = 1.15;

    float getting;
    float getting_per_item;
    float earning;

    cout << "STEAM MARKET CALCULATOR BY KUBIXQAZ" << endl;
    cout << "CALCULATOR WORKS PERFECTLY ONLY IN DOLLARS!" << endl;
    cout << "=================================" << endl << endl;

    cout << "type amount of items that you want to order:" << endl;
    cin >> amount;
    while (amount < int(1))
    {
        cout << "type amount of items that you want to order:" << endl;
        cin >> amount;
    }
    cout << "type how much money you want to spent on 1 item:" << endl;
    cin >> price;
    while (price < float(0.03))
    {
        cout << "type how much money you want to spent on 1 item:" << endl;
        cin >> price;
    }
    cout << "type for how much money you want to sell 1 item:" << endl;
    cin >> selling_for;
    while (selling_for < float(0.03))
    {
        cout << "type for how much money you want to sell 1 item:" << endl;
        cin >> selling_for;
    }

    system("cls");

    if ((float)selling_for == float(0.03)) getting_per_item = 0.01;
    else getting_per_item = selling_for / tax_fee - 0.01;
    getting = getting_per_item * amount;
    earning = getting - price * amount;

    cout << "STEAM MARKET CALCULATOR BY KUBIXQAZ" << endl;
    cout << "CALCULATOR WORKS PERFECTLY ONLY IN DOLLARS!" << endl;
    cout << "=================================" << endl << endl;

    cout << "amount of items that you want to buy: " + to_string(amount) << endl;
    cout << "cost per item that you want to buy: " + to_string(price) << endl;
    cout << "you want to sell 1 item for: " + to_string(selling_for) << endl << endl;

    cout << "=================================" << endl << endl;

    if (getting > 0) cout << "you will get for "+ to_string(amount) +" items: " + to_string(getting) << endl << endl;
    else cout << "you will loss: " + to_string(getting) << endl << endl;

    cout << "=================================" << endl << endl;

    if (earning < 0) {
        system("color 04");
        cout << "status - you will loss: " + to_string(earning) << endl << endl;
    }
    else if (earning == 0) {
        system("color 06");
        cout << "status - you will not make money: " + to_string(earning) << endl << endl;
    }
    else if (earning > 0) {
        system("color 02");
        cout << "status - you will earn: " + to_string(earning) << endl << endl;
    }

    cout << "=================================" << endl << endl;

    string start_again;

    cout << "do you want to calculate again? y/n" << endl;
    cin >> start_again;

    if (start_again == "y") {
        main();
    }
    else if (start_again == "n") {
        return 0;
    }
    else {
        cout << "wrong answer try again type y/n" << endl;
        cin >> start_again;
    }
}