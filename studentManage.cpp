#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class StudentManage {
public:
	StudentManage() {}
	void printStudentInfo() {
        ifstream infile("user.txt");
        string line;
        vector<string> lines;

        if (infile.is_open()) {
            while (getline(infile, line)) {
                lines.push_back(line);
            }
            infile.close();
        }
        else {
            cout << "������ �� �� �����ϴ�." << endl;
        }

        // lines ���Ϳ� ����� ���� ���
        for (const auto& line : lines) {
            cout << line << endl;
        }
	}
	void changeStudentInfo() {
        int num;
        while (true) {
            cout << "������ �л� ������ �������ּ��� \n";
            cout << "1. �̸� | 2. �й� | 3. �а� | 4. �� ������� | 5.��� ���� | 0. ���� ���� \n";
            cout << "�л��������� : ������ ��ȣ�� �Է��ϼ��� : ";
            cin >> num;
            cout << "\n";

            switch (num)
            {
            case 1:// �̸� ����
                break;

            case 2:// �й� ����

                break;

            case 3:// �а� ����

                break;

            case 4:// �� ������� ����

                break;

            case 5:// ��� ���� ����

                break;

            case 0:// ���α׷� ����
                return;
                break;
            }
        }
    }	
};