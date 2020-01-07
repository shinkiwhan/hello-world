#include <iostream>

using namespace std;

int main(void)
{
    int num;
    cout<<"숫자를 입력해주세요: ";
    cin>>num;

    int val1 = num;
    int val2 = num*2;
    int val3 = num*3; 
    int val4 = num*4; 
    int val5 = num*5; 
    int val6 = num*6; 
    int val7 = num*7; 
    int val8 = num*8; 
    int val9 = num*9;

    cout<<num<<"x1= "<<val1<<"\n";
    cout<<num<<"x2= "<<val2<<"\n";
    cout<<num<<"x3= "<<val3<<"\n";
    cout<<num<<"x4= "<<val4<<"\n";
    cout<<num<<"x5= "<<val5<<"\n";
    cout<<num<<"x6= "<<val6<<"\n";
    cout<<num<<"x7= "<<val7<<"\n";
    cout<<num<<"x8= "<<val8<<"\n";
    cout<<num<<"x9= "<<val9<<endl;

    return 0;
}
