#include <iostream>
using namespace std;

// Function prototypes
double findLowest(double a, double b, double c, double d, double e);
double findHighest(double a, double b, double c, double d, double e);

int main() {
    double s1, s2, s3, s4, s5;
    cout << "Enter the five scores separated by spaces:" << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    double lowest = findLowest(s1, s2, s3, s4, s5);
    double highest = findHighest(s1, s2, s3, s4, s5);
    double average = (s1 + s2 + s3 + s4 + s5 - lowest - highest) / 3;

    cout << "Your score is " << average << endl;

    return 0;
}

double findLowest(double a, double b, double c, double d, double e) {
    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    return min;
}

double findHighest(double a, double b, double c, double d, double e) {
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    return max;
}
