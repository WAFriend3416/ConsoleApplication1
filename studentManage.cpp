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
            cout << "파일을 열 수 없습니다." << endl;
        }

        // lines 벡터에 저장된 내용 출력
        for (const auto& line : lines) {
            cout << line << endl;
        }
	}
	void changeStudentInfo() {
        int num;
        while (true) {
            cout << "수정할 학생 정보를 선택해주세요 \n";
            cout << "1. 이름 | 2. 학번 | 3. 학과 | 4. 총 취득학점 | 5.평균 학점 | 0. 수정 종료 \n";
            cout << "학생정보수정 : 실행할 번호를 입력하세요 : ";
            cin >> num;
            cout << "\n";

            switch (num)
            {
            case 1:// 이름 수정
                break;

            case 2:// 학번 수정

                break;

            case 3:// 학과 수정

                break;

            case 4:// 총 취득학점 수정

                break;

            case 5:// 평균 학점 수정

                break;

            case 0:// 프로그램 종료
                return;
                break;
            }
        }
    }	
};