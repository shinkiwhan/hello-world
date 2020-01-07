#include <iostream>

using namespace std;

int main(void)
{
    char name[100];
    char num[100];

    cout<<"당신의 이름을 입력해주세요: ";
    cin>>name;

    cout<<"당신의 전화번호를 입력해주세요: ";
    cin>>num;

    cout<<"당신의 이름은 "<<name<<"입니다.\n";
    cout<<"당신의 전화번호는 "<<num<<"입니다."<<endl;

    return 0;
}
