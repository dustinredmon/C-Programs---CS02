#include <iostream>

using namespace std;

int main() {
    const double HW_RATIO = 50, ATTEN_RATIO = 10, MID_RATIO = 20, FINAL_RATIO = 20, NUM_OF_HW = 10, PERCENTAGE = 100;
    double attendanceRecord = 8;
    double midtermGrade = 97;
    double finalGrade = 75;
    double homework[9];
    homework[0] = 100;
    homework[1] = 100;
    homework[2] = 100;
    homework[3] = 100;
    homework[4] = 100;
    homework[5] = 100;
    homework[6] = 100;
    homework[7] = 100;
    homework[8] = 100;
    homework[9] = 100;
    double hwSum = 0;
    for (int i = 0; i < 10 ; i++){
        hwSum += homework[i];
    }
    double hwAvg = hwSum / NUM_OF_HW / PERCENTAGE;
    double attenAvg = attendanceRecord * 10 / PERCENTAGE;
    double midAvg = midtermGrade / PERCENTAGE;
    double finalAvg = finalGrade / PERCENTAGE;
    double grade = (hwAvg * HW_RATIO) + (attenAvg * ATTEN_RATIO) + (midAvg * MID_RATIO) + (finalAvg * FINAL_RATIO);
    if (grade > 90 )
    cout << "You have an A in this class with " << grade << " percent." << endl;
    else if (grade > 80 )
        cout << "You have an B in this class with " << grade << " percent." << endl;
    else if (grade > 70 )
        cout << "You have an c in this class with " << grade << " percent." << endl;
    else if (grade > 60 )
        cout << "You have an D in this class with " << grade << " percent." << endl;
    else cout << "You have an F in this class with " << grade << " percent." << endl;
    return 0;
}