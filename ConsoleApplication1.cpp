#include <fstream>
#include <iostream>
#include "init.cpp"
#include "studentManage.cpp"
using namespace std;

//메인 함수 
int main()
{
	Init ii;
	StudentManage sm;

	cout << "[===== 학생 전공학점 관리 프로그램 Ver 1.0  ====]\n";
	ifstream infile("user.txt");

	if (!infile.good()) {
		int i = ii.init_user();
		if (i) {
			cout << "설정 완료. 프로그램을 정상실행 합니다. \n";
		}
		else {
			cout << "설정 실패. 프로그램을 종료합니다. \n";
			exit(1);
		}
	}

	while (1)
	{
		cout << "\n";
		cout << "=================================================================================\n";
		cout << "== 1. 학생정보 출력    2. 학생정보 수정     3. 평점 정렬    4. 이산수학 정렬   ==\n";
		cout << "== 5. 멀티개론 정렬  6. 객체지향  정렬  7. 총점 정렬    8. 파일 SAVE           ==\n";
		cout << "== 9. 파일 LOAD      10.학번 검색       11. Data 삭제  12. Program exit        ==\n";
		cout << "=================================================================================\n\n";
		int num;
		while (true) {
			cout << "메인 : 실행할 번호를 입력하세요 : ";
			cin >> num;

			if (num >= 1 && num <= 12) { break;  }
			else{ cout << "입력값이 1부터 12 사이의 정수가 아닙니다. 다시 입력해주세요." << endl; }
		}
		cout << "\n";
		switch (num)
		{
		case 1://현재 등록된 학생정보 출력
			sm.printStudentInfo();
			break;

		case 2://현재 등록된 학생정보 수정
			sm.changeStudentInfo();
			break;

		case 3://평균 정렬 석차 호출 
			
			break;

		case 4://이산수학 정렬 석차 호출 
			
			break;

		case 5://멀티 정렬  정렬 석차 호출 
			
			break;

		case 6://객체 지향  정렬 석차  호출 
			
			break;

		case 7://총점  정렬 석차 호출 
			
			break;

		case 8:// File Save
			
			break;

		case 9://  File Load
			
			break;

		case 10:// 검색 함수 호출 
			
			break;

		case 11://Data 삭제 함수 호출
			
			break;

		case 12://프로그램 종료 
			return 0;
		}
	}

}
