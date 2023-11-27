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
        cout << "초기 파일이 존재하지 않습니다. 초기 설정 프로세스를 진행합니다. \n";
        cout << "이름/학번/학과/총 취득학점/평균 학점(4.5만점) 을 입력해주세요 \n";

        cout << "이름을 입력하세요: ";
        getline(cin, name);

        cout << "학번을 입력하세요: ";
        getline(cin, studentNumber);

        cout << "학과(0000학과,000공학과): "; // 컴공 : 140  | 나머지 학과 130
        getline(cin, department);

        cout << "총 취득학점: ";
        getline(cin, totalScore);

        cout << "평균 학점(4.5만점): " ;
        getline(cin, avgScore);

        ofstream outfile("user.txt");

        if (outfile.is_open()) {
            outfile << "이름: " << name << "\n";
            outfile << "학번: " << studentNumber << "\n";
            outfile << "학과: " <<  department<< "\n";
            outfile << "총 취득학점: " << totalScore << "\n";
            outfile << "평균 학점: " << avgScore << "\n";
            outfile.close();
            return 1;
        }
        else {
            cout << "파일을 열 수 없습니다." << endl;
            outfile.close();
            return 0;
        }

       
	}
};