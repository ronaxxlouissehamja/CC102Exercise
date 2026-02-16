#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        double sales[5][4] = {0};
        int salesperson, product;
        double amount;
        char choice;

        do {
            cout << "\n Salesperson: ";
            cin >> salesperson;

            cout << "Product: ";
            cin >> product;

            cout << "Amount : ";
            cin >> amount;


            sales[product - 1][salesperson - 1] += amount;

            cout << "Add another entry? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\n========================================\n";
        cout << "MONTHLY SALES SUMMARY\n";
        cout << "========================================\n";

        double grandTotal = 0;


        for (int i = 0; i < 5; i++) {
            double rowTotal = 0;

            cout << "\nProduct " << i + 1 << "\n";
            cout << "----------------------------------------\n";

            for (int j = 0; j < 4; j++) {
                cout << "Salesperson " << j + 1 << ": "
                     << sales[i][j] << endl;
                rowTotal += sales[i][j];
            }

            cout << "Total for Product " << i + 1
                 << ": " << rowTotal << endl;

            grandTotal += rowTotal;
        }


        cout << "\n========================================\n";
        cout << "TOTAL SALES PER SALESPERSON\n";
        cout << "----------------------------------------\n";

        for (int j = 0; j < 4; j++) {
            double colTotal = 0;

            for (int i = 0; i < 5; i++) {
                colTotal += sales[i][j];
            }

            cout << "Salesperson " << j + 1
                 << ": " << colTotal << endl;
        }

        cout << "----------------------------------------\n";
        cout << "GRAND TOTAL: " << grandTotal << endl;
        cout << "========================================\n";

        cout << "\nRun program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
