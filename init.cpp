#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Init {
public:
    Init() {}
	int init_user() {
        string name, studentNumber, department, totalScore, avgScore;
        cout << "�ʱ� ������ �������� �ʽ��ϴ�. �ʱ� ���� ���μ����� �����մϴ�. \n";
        cout << "�̸�/�й�/�а�/�� �������/��� ����(4.5����) �� �Է����ּ��� \n";

        cout << "�̸��� �Է��ϼ���: ";
        getline(cin, name);

        cout << "�й��� �Է��ϼ���: ";
        getline(cin, studentNumber);

        cout << "�а�(0000�а�,000���а�): "; // �İ� : 140  | ������ �а� 130
        getline(cin, department);

        cout << "�� �������: ";
        getline(cin, totalScore);

        cout << "��� ����(4.5����): " ;
        getline(cin, avgScore);

        ofstream outfile("user.txt");

        if (outfile.is_open()) {
            outfile << "�̸�: " << name << "\n";
            outfile << "�й�: " << studentNumber << "\n";
            outfile << "�а�: " <<  department<< "\n";
            outfile << "�� �������: " << totalScore << "\n";
            outfile << "��� ����: " << avgScore << "\n";
            outfile.close();
            return 1;
        }
        else {
            cout << "������ �� �� �����ϴ�." << endl;
            outfile.close();
            return 0;
        }

       
	}
};