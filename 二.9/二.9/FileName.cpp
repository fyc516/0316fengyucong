#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int apples = 2;
    int total_apples = 0;
    double total_cost = 0;
    int days = 0;

    // ѭ������ÿ�칺���ƻ�������ͻ���
    while (total_apples + apples <= 100) {
        double cost = apples * 0.8;
        total_apples += apples;
        total_cost += cost;
        apples *= 2;
        days++;
    }

    // ����ƽ������
    double average_cost = total_cost / days;
    cout << "ÿ��ƽ������: " << average_cost << " Ԫ" << endl;

    return 0;
}