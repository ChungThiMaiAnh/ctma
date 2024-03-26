#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double mean(const vector<double>& nums) {
    double sum = 0.0;
    for (double num : nums) {
        sum += num;
    }
    return sum / nums.size();
}

double variance(const vector<double>& nums, double mean) {
    double s = 0.0;
    for (double num : nums) {
        s += pow(num - mean, 2);
    }
    return s/nums.size();
}

int main() {
    int n;
    cin >> n;
    vector<double> nums(n);
    for (int i = 0; i < n; ++i) {
        cout << "Số thứ " << i + 1 << ": ";
        cin >> nums[i];
    }

    double avg = mean(nums);
    double var = variance(nums, avg);
    cout << "Giá trị trung bình: " << avg << endl;
    cout << "Phương sai: " << var << endl;
}

