#include <iostream>
using namespace std;

class HealthSystem {
private:
    string name;
    int age;
    double weight;   
    int steps;

public:
   
    HealthSystem(string n, int a, double w, int s) {
        name = n;
        age = a;
        weight = w;
        steps = s;
    }

  
    double calculateCalories() {
        // Simple formula: 0.04 calories per step (approx)
        return steps * 0.04;
    }

    void giveSuggestion() {
        cout << "\n Health \n";

        if (steps < 3000) {
            cout << "You are less active.\n";
            cout << " Try walking at least 7000-10000 steps daily.\n";
        }
        else if (steps >= 3000 && steps < 7000) {
            cout << " Good, but you can improve.\n";
            cout << " Add light exercise like jogging or yoga.\n";
        }
        else {
            cout << "Excellent! You are very active.\n";
            cout << " Maintain this routine for good health.\n";
        }

        if (weight > 80) {
            cout << " Consider weight management (diet + exercise).\n";
        }

        if (age > 50) {
            cout << "Suggestion: Include light exercise & regular checkups.\n";
        }
    }

   
    void display() {
        cout << "\n Details \n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Steps Walked: " << steps << endl;

        cout << "Calories Burned: " << calculateCalories() << " kcal\n";

        giveSuggestion();
    }
};

int main() {
    string name;
    int age, steps;
    double weight;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter steps walked today: ";
    cin >> steps;
    
    HealthSystem user(name, age, weight, steps);

   
    user.display();

    return 0;
}