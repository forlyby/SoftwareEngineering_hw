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

#include "SignupUI.h"  //ȸ������
#include "Signup.h"
#include "LoginUI.h"  //�α���
#include "Login.h"
#include "LogoutUI.h"  //�α׾ƿ�
#include "Logout.h"
#include "AddBicycleUI.h"  //�����ŵ��
#include "AddBicycle.h"
#include "RentBicycleUI.h"  //�����Ŵ뿩
#include "RentBicycle.h"
#include "ListLendBicycleUI.h"   //�����Ŵ뿩������ȸ
#include "ListLendBicycle.h"



// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
ifstream in_fp;
ofstream out_fp;


int main()
{
    // input.txt, output.txt ���� ����
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    if (!in_fp || !out_fp) {
        cout << "���� ���� ����!" << endl;
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
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:                                            //1.1 ȸ������
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
            case 1:                                              //2 1 �α���
            {
                LoginUI* loginui = new LoginUI;  //����
                loginui->getLoginForm();   //�α����Է¹���
                cout << '\n' << endl;
                break;
            }
            case 2:                                              //2.2 �α׾ƿ�
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
            case 1:   // 3.1 ������ ���
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
            case 1:   // 4.1 ������ �뿩
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
            case 1:   // 5.1 ������ �뿩 ����Ʈ ��ȸ
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
            case 1:   // 6.1 ����
            {
                out_fp << "6.1. ����" << endl;
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
        }
    }
}
