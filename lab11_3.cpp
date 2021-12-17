//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

double stdDV(double x, double y, double z){
    double stdDV = sqrt((x)/y-pow(z,2));
    return stdDV;
}

using namespace std;

int main(){
    int count = 0;
    double sum = 0, sumstdDV = 0;
    string score;
    ifstream source("score.txt");
    while (getline(source, score)){
        sum += stod(score);
        sumstdDV += pow(stod(score), 2);
        count ++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << stdDV(sumstdDV,count,sum/count);
}