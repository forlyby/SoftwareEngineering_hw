#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;

//entity.h
#include "User.h"
#include "Member.h"
#include "Manager.h"
#include "Bicycle.h"
#include "RentalRecord.h"

#include "SignupUI.h"  //회원가입
#include "Signup.h"
#include "LoginUI.h"  //로그인
#include "Login.h"
#include "LogoutUI.h"  //로그아웃
#include "Logout.h"
#include "AddBicycleUI.h"  //자전거등록
#include "AddBicycle.h"
#include "RentBicycleUI.h"  //자전거대여
#include "RentBicycle.h"
#include "ListLendBicycleUI.h"   //자전거대여정보조회
#include "ListLendBicycle.h"



// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
ifstream in_fp;
ofstream out_fp;


int main()
{
    // input.txt, output.txt 파일 열기
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    if (!in_fp || !out_fp) {
        cout << "파일 열기 실패!" << endl;
        return 1;
    }


    doTask();

    in_fp.close();
    out_fp.flush();
    out_fp.close();

    return 0;
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:                                            //1.1 회원가입
            {
                SignupUI* signupui = new SignupUI;
                signupui->getSignupForm();
                cout << '\n'<<endl;
                break;
            }
            }
            break;
        }                                                      //case 1 end
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:                                              //2 1 로그인
            {
                LoginUI* loginui = new LoginUI;  //생성
                loginui->getLoginForm();   //로그인입력받음
                cout << '\n' << endl;
                break;
            }
            case 2:                                              //2.2 로그아웃
            {
                LogoutUI* logoutui = new LogoutUI;
                logoutui->selectLogout();
                cout << '\n' << endl;
                break;
            }
            }
            break;
        }                                                        //case 2 end
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:   // 3.1 자전거 등록
            {
                AddBicycleUI* ui = new AddBicycleUI;
                ui->getEnrollForm();
                cout << '\n' << endl;
                break;
            }
            }
            break;
        }

        case 4:
        {
            switch (menu_level_2) {
            case 1:   // 4.1 자전거 대여
            {
                RentBicycleUI* ui = new RentBicycleUI;
                ui->selectBicycle();
                cout << '\n' << endl;
                break;
            }
            }
            break;
        }

        case 5:
        {
            switch (menu_level_2) {
            case 1:   // 5.1 자전거 대여 리스트 조회
            {
                ListLendBicycleUI* ui = new ListLendBicycleUI;
                ui->selectRentalBicycleList();
                cout << '\n' << endl;
                break;
            }
            }
            break;
        }

        case 6:
        {
            switch (menu_level_2) {
            case 1:   // 6.1 종료
            {
                out_fp << "6.1. 종료" << endl;
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
        }
    }
}
