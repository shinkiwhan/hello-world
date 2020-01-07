#include <iostream>

using namespace std;

int main(void)
{
    int a = 0;
    
    while(a>=0){     
            cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
            cin>>a;

            double b = a*0.12;

            int money = 50 + b;
        if(a<0)
        {
            cout<<"프로그램을 종료합니다."<<endl;
            break;
        }
        else
        {
            cout<<"이번 달 급여: "<<money<<"만원\n";
        }
        
    }
    
    return 0;
}
