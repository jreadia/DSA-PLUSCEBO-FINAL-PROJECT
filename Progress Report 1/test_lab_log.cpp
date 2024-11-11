#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Material {
    string name;
    int quantity;
};

int main() {
    vector<Material> materials;
    string dateTime;
    string materialName;
    int quantity;

    //Get date and time for borrowing
    cout << "Enter the date and time for borrowing (e.g., YYYY-MM-DD HH:MM): ";
    getline(cin, dateTime);

    cout << "Enter laboratory materials and their quantities (type 'END' to finish):" << endl;

    while (true) {
        cout << "Material name: ";
        getline(cin, materialName);

        if (materialName == "END") {
            break;
        }

        cout << "Quantity: ";
        cin >> quantity;
        cin.ignore(); //Clear newline character from input buffer

        //Store material & quantity
        materials.push_back({materialName, quantity});
    }

    //Output borrowing information
    cout << "\nBorrowing Information:\n";
    cout << "Date and Time: " << dateTime << std::endl;
    cout << "Materials Borrowed:\n";
    for (const auto& material : materials) {
        cout << "- " << material.name << ": " << material.quantity << endl;
    }

    return 0;
}