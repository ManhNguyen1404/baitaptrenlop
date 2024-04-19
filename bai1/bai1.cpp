#include <iostream>

using namespace std;

void printMenu() {
    cout << "1. Đăng nhập" << endl;
    cout << "2. Đăng ký" << endl;
    cout << "3. Thoát" << endl;
}

void login() {
    cout << "Bạn đã đăng nhập thành công!" << endl;
}

void registerUser() {
    cout << "Bạn đã đăng ký tài khoản thành công!" << endl;
}

int main() {
    int choice;
    do {
        printMenu();
        cout << "Nhập lựa chọn của bạn: ";
        cin >> choice;

        switch (choice) {
        case 1:
            login();
            break;
        case 2:
            registerUser();
            break;
        case 3:
            cout << "Tạm biệt!";
            break;
        default:
            cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
    } while (choice != 3);

    return 0;
}
