#include<iostream>
#include<istream>
#include<fstream>
#include <cmath>
#include<windows.h>
#include<string.h>
using namespace std;
void login();
void registr();





class zakat
{
    public:
    void personal();
    void asset();



};
int main()
{
     HANDLE F=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(F,9);
    cout<<"\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$          WELCOME TO OUR GROUP PROJECT             $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$          PROJECT  TITLE:  ALMSGIVING              $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                TEAM NO. 07                        $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                TEAM  MEMBERS :                    $"<<endl;
    HANDLE Q=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Q,11);
    cout<<"\t\t\t\t$            =======================                $"<<endl;
    cout<<"\t\t\t\t$            =======================                $"<<endl;
    HANDLE T=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(T,6);
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$ NAME:                                  ID NO.     $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$ MD.TANJIL TASHRIK ZIM                  22-48021-2 $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$ MD.AL-IMRAN SAYEM                      22-48023-2 $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$ MD.ABRAR RAFID SHARIAR                 22-48055-2 $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t$                                                   $"<<endl;
    cout<<"\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;




 HANDLE Z=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Z,6);


    cout<<"\t\t\t\tPress 1 to continue in the next page  :";

    int a;
    cin>>a;
     system("cls");


    if(a!=111111)
        {

    float calculateZakat();
        int choice,n;
    HANDLE F=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(F,11);
        cout<<"\t\t\t*************************\n\n\n";
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,6);
        cout<<"\t\t\t                      Welcome to our login page                               \n\n";
            HANDLE z=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(z,5);
        cout<<"\t\t\t*******       Starting Options       ******** \n\n";
            HANDLE x=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(x,3);
        HANDLE y=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(y,3);
        cout<<"\t\t\t\t\t\t1.LOGIN"<<endl;
            HANDLE q=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(q,2);
        cout<<"\t\t\t\t\t\t2.REGISTER"<<endl;
            HANDLE w=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(w,13);
        cout<<"\t\t\t\t\t\t3.FORGOT PASSWORD"<<endl;

        cout<<"\t\t\t\t\t\t4.Exit"<<endl;
        cout<<"\n\t\t\t\t\tEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;

                     //   case 3:

                case 4:

                        cout<<"Thanks for using this program.\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        main();
        }

        }
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"\t\t\tplease enter the following details"<<endl;
        cout<<"\t\t\tUSERNAME :";
        cin>>user;
        cout<<"\t\t\tPASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
       // input.close();
       /* if(count==1)
        {
                cout<<"\nHello"<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }*/

    if(count==1)
    {
        system("cls");




int n;

    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,6);
cout<<"\t\t\t::=========:::::::::::::=========:::::::::::::==========::"<<endl;
    HANDLE A=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(A,13);
    cout<<"\t\t\t::          WELCOME                                     ::"<<endl;
    HANDLE B=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(B,8);
    cout<<"\t\t\t::                   TO                                 ::"<<endl;
    HANDLE C=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(C,9);
    cout<<"\t\t\t::                       OUR                            ::"<<endl;
    HANDLE D=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(D,10);
    cout<<"\t\t\t::                            MAIN                      ::"<<endl;
    HANDLE F=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(F,11);
    cout<<"\t\t\t::                                   MANU               ::"<<endl;
    HANDLE G=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(G,12);
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,14);
    cout<<"\t\t\t::=========:::::::::::::=========:::::::::::::==========::"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    HANDLE I=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(I,9);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE o=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(o,2);
    cout<<"\t\t\t*    Press 1 for Calculation Zakat                        *"<<endl;
    HANDLE p=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(p,3);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE J=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(J,2);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE q=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(q,3);
    cout<<"\t\t\t*    Press 2 for pay zakat                               *"<<endl;
    HANDLE r=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(r,4);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE K=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(K,3);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE s=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(s,7);
    cout<<"\t\t\t*    Press 3 for eligibility check                       *"<<endl;
    HANDLE t=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(t,8);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE u=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(u,9);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    cout<<"\t\t\t*    Press 4 for donation to masjid                      *"<<endl;
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE M=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(M,5);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    cout<<"\t\t\t*    Press 5 for help/terms & condition/about us         *"<<endl;
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    HANDLE N=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(N,6);
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;
    cout<<"\t\t\t*   ONLY GOD CAN HELP US                                 *"<<endl;
    cout<<"\t\t\t******^^^^^^^^^^^^^^^^^^^*****^^^^^^^^^^"<<endl;



     HANDLE g=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(g,10);
    cout<<"\t\t\tEnter your choice  "<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        float zakatcal(float);
        break;
    case 2:
        void assest();
        break;

    }


    }



     else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
        system("cls");

float zakathcal();
{
    int annualIncome = 0;
    int income;
  const float zakatRate = 0.025;
     //float payableZakat;
  //float calculateZakat(int income, float zakatRate);
  //{float payableZakat = income * zakatRate;
   //return payableZakat;


 {


  cout << "\t\t\t--Welcome To Zakat Calculator--" << endl;
  cout << "\t\t\tEnter Annual Income : " ;
  cin >> annualIncome;

  int z;

  cout << "\t\t\tAnnual Income: $" << annualIncome << endl;
  cout << "\t\t\tZakat Rate: " << zakatRate << endl;
  cout << "\t\t\tTotal Payable Zakat: $" << annualIncome*zakatRate << endl;
  cout << "\t\t\tThank You!" << endl;
  cout << "\t\t\tPress 0 for Return Main Menu" <<endl;
  cin >> z;
  if(z==0)
  {
      main();
  }



}
}






}




void registr()

{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        main();


}
