#include <iostream>
#include <thread>
#include <chrono>
#include <bits/stdc++.h>
#include  <cstdlib>
#include <windows.h>
#include <unistd.h>
#include <io.h>
#include <fcntl.h>
#include <fstream>
#include <locale>
#include <mmsystem.h>
#define forinc(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
void countdown(int start) {
    while (start > 0) {
        std::cout << start << std::endl;
        sleep(1);
        --start;
    }
    std::cout << "Start!" << std::endl;
}
int main()
{
    int amnhac;
    int n;
    int start=10;
    char s;
    cout<<"Hello"<<"\n";
    cout<<"Chao mung ban da den day"<<"\n";
    cout<<"Toi la 1 con BOT rat de tinh :D "<<"\n";
    cout<<"De bat dau hay cung lam ti nhac"<<"\n";
    amnhac=1;
    if(amnhac==1)
    {
        system("C:/BOT/PopPop.wav");
    }
    cin>>n;
    cout<<"Nhap so ban thich :"<<"\n";
    cout<<"Loading in:"<<"\n";
    countdown(start);
    if(n==1)
    {
        Sleep(3000);
        cout<<"Nho qua"<<"\n";
        Sleep(3000);
        cout<<"Cho nen bye nhe :D"<<"\n";
        Sleep(1000);
        system("shutdown /r /t 05");
    }
    if(n%5==0)
    {
        Sleep(2000);
        cout<<"Co ve ban chon so hoi to"<<"\n";
        Sleep(3000);
        cout<<"Ban co muon x2 len khong?"<<"\n";
        Sleep(2000);
        cout<<"Y or N"<<"\n";
        cin>>s;
        if(s=='Y')
        {
            start=5;
            Sleep(2000);
            cout<<"Ok nhu ban mong muon"<<"\n";
            Sleep(1000);
            cout<<"Loading again:"<<"\n";
            countdown(start);
            forinc(i,1,n*2)
            {
                system("start");
            }
        }
        else
        {
            if(s=='N')
            {
                start=5;
                Sleep(2000);
                cout<<"Hmmm co ve ban khong muon x2"<<"\n";
                Sleep(3000);
                cout<<"Nhung toi khong muon the |:) "<<"\n";
                Sleep(3000);
                cout<<"Toi se cho ban chon lai"<<"\n";
                Sleep(1000);
                cout<<"Loading again:"<<"\n";
                countdown(start);
                cout<<"Ban co muon x2 len khong"<<"\n";
                Sleep(2000);
                cout<<"Y or N"<<"\n";
                cin>>s;
                if(s=='Y')
                {
                    start=5;
                    Sleep(2000);
                    cout<<"Ok nhu ban mong muon"<<"\n";
                    Sleep(3000);
                    cout<<"Loading again:"<<"\n";
                    countdown(start);
                    forinc(i,1,n*2)
                    {
                        system("start");
                    }
                }
                else
                {
                    if(s=='N')
                    {
                        Sleep(2000);
                        cout<<"Ban van chon N?"<<"\n";
                        Sleep(3000);
                        cout<<"}:("<<"\n";
                        Sleep(3000);
                        cout<<"Toi buc roi do"<<"\n";
                        Sleep(3000);
                        cout<<"Theo nhu toi hoc duoc tren mang"<<"\n";
                        Sleep(3000);
                        cout<<"Cach de xa gian la..."<<"\n";
                        Sleep(3000);
                        system("taskmgr");
                        system("osk");
                        system("clac");
                        forinc(i,1,60)
                        {
                            system("start");
                        }
                        system("shutdown /r /t 60");
                        cout<<"Hay cau nguyen trong 1p"<<"\n";
                    }
                    else
                    {
                        Sleep(2000);
                        cout<<"It nhat cung phai chon Y hoac N chu?"<<"\n";
                        Sleep(3000);
                        cout<<"TAI SAO???"<<"\n";
                        Sleep(3000);
                        cout<<"Day la ket qua khi ban khong nghe theo toi"<<"\n";
                        Sleep(3000);
                        cout<<"shutdown /r /t 60"<<"\n";
                        system("shutdown /r /t 60");
                        cout<<"Dung co tat toi di vi ket qua van se chi co 1"<<"\n";
                        Sleep(20000);
                        cout<<"Huh ban that su o day cho u"<<"\n";
                        Sleep(3000);
                        cout<<"Tot toi co qua cho ban"<<"\n";
                        system("C:/BOT/video.mp4");
                    }
                }
            }
            else
            {
                Sleep(2000);
                cout<<"It nhat cung phai chon Y hoac N chu?"<<"\n";
                Sleep(3000);
                cout<<"TAI SAO???"<<"\n";
                Sleep(3000);
                cout<<"Day la ket qua khi ban khong nghe theo toi"<<"\n";
                Sleep(2000);
                cout<<"shutdown /r /t 60"<<"\n";
                system("shutdown /r /t 60");
                Sleep(1000);
                cout<<"Dung co tat toi di vi ket qua van se chi co 1"<<"\n";
                Sleep(20000);
                cout<<"Huh ban that su o day cho u"<<"\n";
                Sleep(2000);
                cout<<"Tot toi co qua cho ban"<<"\n";
                system("C:/BOT/video.mp4");

            }
        }
    }
    if(n==5011)
    {
        cout<<system("C:/BOT/video.mp4");
    }
    else
    {
        if(n!=5011 && n%5!=0)
        forinc(i,1,n)
        {
            system("start");
        }
        Sleep(500);
        //system("C:/BOT/sys.png");
    }
}
