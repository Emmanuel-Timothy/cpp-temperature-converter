#include <iostream>

using namespace std;

// Function to convert Celsius to Fahrenheit, Réaumur, and Kelvin
void celcius() {
    float C;
    cout << "Enter degree in Celsius: ";
    cin >> C;
    
    // Converting Celsius to Fahrenheit
    float F = (C * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << F << endl;
    
    // Converting Celsius to Réaumur
    float R = C * 4 / 5;
    cout << "Temperature in Réaumur: " << R << endl;
    
    // Converting Celsius to Kelvin
    float K = C + 273.15;
    cout << "Temperature in Kelvin: " << K << endl;
}

// Function to convert Fahrenheit to Celsius, Réaumur, and Kelvin
void farenheit() {
    float F;
    cout << "Enter degree in Fahrenheit: ";
    cin >> F;
    
    // Converting Fahrenheit to Celsius
    float C = (F - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << C << endl;
    
    // Converting Fahrenheit to Réaumur
    float R = (F - 32) * 4 / 9;
    cout << "Temperature in Réaumur: " << R << endl;
    
    // Converting Fahrenheit to Kelvin
    float K = (F + 459.67) * 5 / 9;
    cout << "Temperature in Kelvin: " << K << endl;
}

// Function to convert Réaumur to Celsius, Fahrenheit, and Kelvin
void reamur() {
    float R;
    cout << "Enter degree in Réaumur: ";
    cin >> R;
    
    // Converting Réaumur to Celsius
    float C = R * 5 / 4;
    cout << "Temperature in Celsius: " << C << endl;
    
    // Converting Réaumur to Fahrenheit
    float F = (R * 9 / 4) + 32;
    cout << "Temperature in Fahrenheit: " << F << endl;
    
    // Converting Réaumur to Kelvin
    float K = (R * 5 / 4) + 273.15;
    cout << "Temperature in Kelvin: " << K << endl;
}

// Function to convert Kelvin to Celsius, Fahrenheit, and Réaumur
void kalvin() {
    float K;
    cout << "Enter degree in Kelvin: ";
    cin >> K;
    
    // Converting Kelvin to Celsius
    float C = K - 273.15;
    cout << "Temperature in Celsius: " << C << endl;
    
    // Converting Kelvin to Fahrenheit
    float F = (K * 9 / 5) - 459.67;
    cout << "Temperature in Fahrenheit: " << F << endl;
    
    // Converting Kelvin to Réaumur
    float R = (K - 273.15) * 4 / 5;
    cout << "Temperature in Réaumur: " << R << endl;
}

int main() {
    int option;
    cout << "Hello, please select the option below" << endl;
    cout << "1. Celsius, 2. Fahrenheit, 3. Réaumur, 4. Kelvin, 0.Exit" << endl;
    cin >> option;
    while(option != 0){
        switch(option){
            case 1:
                celcius();
                break;
            case 2:
                farenheit();
                break;
            case 3:
                reamur();
                break;
            case 4:
                kalvin();
                break;
            case 0:
                break;
            default:
                cout << "Enter it correctly you moron" << endl;
                break;
        }
        if(option != 0) {
            cout << "Select option: ";
            cout << "1. Celsius, 2. Fahrenheit, 3. Réaumur, 4. Kelvin, 0.Exit" << endl;
            cin >> option;
        }
    }
    return 0;
}
