#include<iostream>
#include<string>
using namespace std;
void menu();
void dishes();
void beef();
void drinks();
int dishFunct();
int beefFunct();
int drinkFunct();
void payOption();
void paychoice();
void pintele();
void pincbe_birr();
void pinhello_lion();
void pinhello_weg();
void insuff();
void congra();
void thank();
/*    THE MAIN FUNCTION    */

int main() {
    label:
    system("color 3e");
    int a;
    do{
        menu();
        cout << endl;
        cout << "<<<<===Enter your order please here===>>>>";
        cin >> a;
        system("cls");
        switch (a) {
            case 1:
                dishes();
                dishFunct();
                system("pause");
            case 2:
                beef();
                beefFunct();
                system("pause");
            case 3:
                drinks();
                drinkFunct();
                system("pause");
            case 4:
                exit(1);
        }
    } while(a>0&&a<=4);
    cout<<"Invalid code input....please select from list....\n";
    system("pause");
    goto label;
}

// END OF MAIN FUNCTIN


//**********OUTPUT FUCTION*****************************************

void menu() {
    system("cls");
    cout << "\t\t\\\\\\*******************************************************************************************///"<<endl;
    cout << "\t\t  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\t\t\t\t\t   ////////////////////////////"<<endl;
    cout << "\t\t   |~~~~~~~~~~~~~~~~~~~~~~~~~  WELCOME TO AASTU CAFE AND RESTAURANT  ~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout << "\t\t  /////////////////////////////    \t\t\t\t   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout << "\t\t////******************************************************************************************\\\\";
    cout << endl;cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t<<<<<<=====    MENU LIST   ====>>>>>>\n";
    cout << endl;
    cout << "\t\t\t\t[1] Dishes\n";
    cout << "\t\t\t\t[2] Beef\n";
    cout << "\t\t\t\t[3] Drinks\n";
    cout << "\t\t\t\t[4] Exit\n";
}
void dishes() {
    cout << "\t___________________________________________________________________________________"<<endl;
    cout << "\t|\t                                                                           |\n";
    cout << "\t|\t    Dishes_________________________________PRICE(Birr).                    |\n";
    cout << "\t|\t                          |                                                |\n";
    cout << "\t|\t1#  Beyaynet..............|...................30 Birr                      |\n";
    cout << "\t|\t2#  Tegabino..............|...................35 Birr                      |\n";
    cout << "\t|\t3#  Pasta be atkilt.......|...................25 Birr                      |\n";
    cout << "\t|\t4#  Pasta be sigo.........|...................25 Birr                      |\n";
    cout << "\t|\t5#  Ejera Firfir..........|...................25 Birr                      |\n";
    cout << "\t|\t6#  Special Firfir........|...................30 Birr                      |\n";
    cout << "\t|\t7#  Enqulal...............|...................30 Birr                      | \n";
    cout << "\t|\t8#  Misre Wet.............|...................25 Birr                      |\n";
    cout << "\t|\t9#  Shiro Feses...........|...................30 Birr                      |\n";
    cout << "\t|\t10# Timatim Lebleb........|...................25 Birr                      |\n";
    cout << "\t|\t11# Suf Fitfit............|...................30 Birr                      |\n";
    cout << "\t|\t12# Special Ful...........|...................30 Birr                      |\n";
    cout << "\t|\t13# Ertibe................|...................25 Birr                      |\n";
    cout << "\t|\t14# Chebchebsa............|...................30 Birr                      |\n";
    cout << "\t|\t15# Soyo..................|...................30 Birr                      |\n";
    cout << "\t|__________________________________________________________________________________|"<<endl;
    cout<<endl;}
void beef() {
    cout << "\t___________________________________________________________________________________"<<endl;
    cout << "\t|\t                                                                          |\n";
    cout << "\t|\t  Beef Food_______________________________________PRICE(Birr).            |\n";
    cout << "\t|\t                                    |                                     |\n";
    cout << "\t|\t1#  KEY WOT.........................|.............80 Birr                 |\n";
    cout << "\t|\t2#  ALICHA WOT......................|.............85 Birr                 |\n";
    cout << "\t|\t3#  TIBS............................|............100 Birr                 |\n";
    cout << "\t|\t4#  KITFO...........................|............150 Birr                 |\n";
    cout << "\t|\t5#  MINCHET.........................|.............75 Birr                 |\n";
    cout << "\t|\t6#  AGELGLE.........................|............120 Birr                 |\n";
    cout << "\t|\t7#  QUANTA FIRFIR...................|.............80 Birr                 |\n";
    cout << "\t|\t8#  GOMEN BESIGA....................|.............75 Birr                 |\n";
    cout << "\t|\t9#  BOZENA SHIRO....................|.............60 Birr                 |\n";
    cout << "\t|\t10# ZILZL TIBS......................|............105 Birr                 |\n";
    cout << "\t|\t                                    |                                     |\n";
    cout << "\t|_________________________________________________________________________________|"<<endl;
    cout<<endl;}
void drinks() {
    cout << "\t________________________________________________________________________________________"<<endl;
    cout << "\t|\t                                                                               |\n";
    cout << "\t|\t                                                                               |\n";
    cout << "\t|\t     DRINKS________________________________________________PRICE(Birr)         |\n";
    cout << "\t|\t                                               |                               |\n";
    cout << "\t|\t1#  Bottle of Water( 0.5 Litre)................|...............7 Birr          |\n";
    cout << "\t|\t2#  Bottle of Water( 1 Litre)..................|..............10 Birr          |\n";
    cout << "\t|\t3#  Coca Cola( 0.5 Litre)......................|..............30 Birr          |\n";
    cout << "\t|\t4#  Sprite( 0.5 Litre).........................|..............30 Birr          |\n";
    cout << "\t|\t5#  Mirinda( 0.5 Litre)........................|..............30 Birr          |\n";
    cout << "\t|\t                                                                               |\n";
    cout << "\t|______________________________________________________________________________________|"<<endl;
    cout << "\t|\t                                                                               |\n";
    cout << "\t|\t      HOT DRINKS________________________________PRICE(Birr)                    |\n";
    cout << "\t|\t                              |                                                |\n";
    cout << "\t|\t6#   COFFEE..................'|....................5 Birr                      |\n";
    cout << "\t|\t7#   TEA......................|....................4 Birr                      |\n";
    cout << "\t|\t8#   SPRIS....................|....................5 Birr                      |\n";
    cout << "\t|\t9#   QESHIR...................|....................5 Birr                      |\n";
    cout << "\t|\t10#  LEWUZ....................|....................7 Birr                      |\n";
    cout << "\t|\t                              |                                                |\n";
    cout << "\t|______________________________________________________________________________________|"<<endl;
    cout<<endl;
}
int dishFunct(){
    int i=0,n,overallprice=0;
    int c[15];
    int Q[15];
    int priceOfdish[15]={30,35,25,25,25,30,30,25,30,25,30,30,25,30,30};
    int totprice[15];
    float amount,change;
    string nameOfdishes[15]={"Beyaynet.......","Tegabino.......","Pasta be atkilt",
                             "Pasta be sigo.","Ejera Firfir..","Special Firfir.","Enqulal........",
                             "Misre Wot......","Shiro feses....","Timatim Lebleb.","Suf Fitft......",
                             "Special Ful....","Ertibe.........","Chebchebsa.....","Soya..........."};

    cout<<"\tHow many type of Dishes do you want ?\n";
    cout<<"\t";cin>>n;
if( n>0 && n<=15)
{   int r;
    cout<<"\tIf you want to change the number of type of dish click cancel otherwise continue......\n";
    cout<<"\t\t[1] continue\n"<<"\t\t[any int] cancel\t\t\t";cin>>r;
switch(r){
case 1:
        do
        {
            cout<<"\tEnter your choice No.. "<<i+1<<" :";cin>>c[i];
            cout<<"\twhat quantity do you want?\n";
            cout<<"\tQ :";cin>>Q[i];
            switch(c[i]){
                case 1: totprice[i]=priceOfdish[0]*Q[i];break;
                case 2: totprice[i]=priceOfdish[1]*Q[i];break;
                case 3: totprice[i]=priceOfdish[2]*Q[i];break;
                case 4: totprice[i]=priceOfdish[3]*Q[i];break;
                case 5: totprice[i]=priceOfdish[4]*Q[i];break;
                case 6: totprice[i]=priceOfdish[5]*Q[i];break;
                case 7: totprice[i]=priceOfdish[6]*Q[i];break;
                case 8: totprice[i]=priceOfdish[7]*Q[i];break;
                case 9: totprice[i]=priceOfdish[8]*Q[i];break;
                case 10:totprice[i]=priceOfdish[9]*Q[i];break;
                case 11:totprice[i]=priceOfdish[10]*Q[i];break;
                case 12:totprice[i]=priceOfdish[11]*Q[i];break;
                case 13:totprice[i]=priceOfdish[12]*Q[i];break;
                case 14:totprice[i]=priceOfdish[13]*Q[i];break;
                case 15:totprice[i]=priceOfdish[14]*Q[i];break;
                default:
                cout<<"Invalid code input....you have only 15 types of food....\n";
                system("pause");
                    main();
                        }
            overallprice+=totprice[i];
            i++;
         } while(i<n);
        system("cls");
        cout<<endl;
        cout<<"\t<<---Your order is --->>\n";
        cout<<endl;
        cout<<"\tNo_________Foods_________________________Quantity________________price/unit____________Price/Quantity____";
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfdishes[c[i]-1]<<"........................"<<Q[i];
            cout<<"........................"<<priceOfdish[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        payOption();
        paychoice();
  third:
        cout <<"\t<<<==  Enter amount to pay  ==>>>\n";
        cout<<"\t";cin>>amount;
        change=amount-overallprice;
if(change>=0){
        congra();
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfdishes[c[i]-1]<<"........................"<<Q[i];
            cout<<"........................"<<priceOfdish[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<"\tYour Recept_________________________________________\n";
        cout<<endl;
        cout<<"\t1: Total number of menu customer order..:"<<n<<" type"<<endl;
        cout<<"\t2: Total amount customer pay............:"<<amount<<" Birr"<<endl;
        cout<<"\t3: Overall price........................:"<<overallprice<<" Birr"<<endl;
        cout<<"\t4: Change...............................:"<<change<<" Birr"<<endl;
        thank();
      }
else
    insuff();
    goto third;
default : main();
    }
}
else
    cout<<"Invalid code input....you have only 15 types of food....\n";
    system("pause");
    system("cls");
   return main();
}
int beefFunct(){
    int i=0,n,overallprice=0;
    int c[10];
    int Q[10];
    int priceOfbeef[10]={80,85,100,150,75,120,80,75,60,105};
    int totprice[10];
    float amount,change;
    string nameOfbeef[10]={"KEY WOT.......","ALICHA WOT....","TIBS..........","KITFO.........","MINCHET.......","AGELGLE.......",
                           "QUANATA FIRFIR","GOMEN BESIGA..","BEZENA SHIRO..","ZILZIL TIBS..."};
    cout<<"\tHow many type of Beef Foods do you want ?\n";
    cout<<"\t";cin>>n;
if(n>0&&n<10)
{ int r;
cout<<"\tIf you want to change the number of type of beef click cancel otherwise continue......\n";
cout<<"\t\t[1] continue\n"<<"\t\t[any int] cancel\t\t\t";cin>>r;
switch(r){
case 1:
    do{
            cout<<"\tEnter your choice No.. "<<i+1<<" :";cin>>c[i];
            cout<<"\twhat quantity do you want?\n";
            cout<<"\tQ :";cin>>Q[i];
            switch(c[i]){
                case 1:  totprice[i]=priceOfbeef[0]*Q[i];break;
                case 2:  totprice[i]=priceOfbeef[1]*Q[i];break;
                case 3:  totprice[i]=priceOfbeef[2]*Q[i];break;
                case 4:  totprice[i]=priceOfbeef[3]*Q[i];break;
                case 5:  totprice[i]=priceOfbeef[4]*Q[i];break;
                case 6:  totprice[i]=priceOfbeef[5]*Q[i];break;
                case 7:  totprice[i]=priceOfbeef[6]*Q[i];break;
                case 8:  totprice[i]=priceOfbeef[7]*Q[i];break;
                case 9:  totprice[i]=priceOfbeef[8]*Q[i];break;
                default:
                 cout<<"Invalid code input....you have only 15 types of food....\n";
                   system("pause");
                      main();
                         }
            overallprice=overallprice+totprice[i];
            i++;
         } while(i<n);
        system("cls");
        cout<<endl;
        cout<<"\t<<---Your order is --->>\n";
        cout<<endl;
        cout<<"\tNo__Beef_______________________________Quantity________________price/unit____________Price/Quantity____";
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfbeef[c[i]-1]<<"........................."<<Q[i];
            cout<<"......................"<<priceOfbeef[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        payOption();
        paychoice();
     third:
        cout <<"\t<<<==  Enter amount to pay  ==>>>\n";
        cout<<"\t";cin>>amount;
        change=amount-overallprice;
if(change>=0){
        congra();
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfbeef[c[i]-1]<<"........................"<<Q[i];
            cout<<"........................"<<priceOfbeef[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<"\tYour Recept_________________________________________\n";
        cout<<endl;
        cout<<"\t1: Total number of menu customer order..:"<<n<<" type"<<endl;
        cout<<"\t2: Total amount customer pay............:"<<amount<<" Birr"<<endl;
        cout<<"\t3: Overall price........................:"<<overallprice<<" Birr"<<endl;
        cout<<"\t4: Change...............................:"<<change<<" Birr"<<endl;
        thank();
      }
else
    insuff();
    goto third;
default : main();
    }
}
else
    cout<<"Invalid code input....you have only 15 types of food....\n";
    system("pause");
    system("cls");
   return main();
}
int drinkFunct(){
    int i=0,n,overallprice=0;
    int c[10];
    int Q[10];
    int priceOfdrink[10]={7,10,30,30,30,5,4,5,5,7};
    int totprice[10];
    float amount,change;
    string nameOfdrink[10]={"Water(0.5 Litre)","Water(1 Litre)..",
                            "Coca Cola.......","Sprite..........","Mirinda........."
            ,"COFFEE..........","TEA.............","SPRIS..........."
            ,"QESHIR..........","LEWUZ..........."};
    cout<<"\tHow many type of Drinks do you want ?\n";
    cout<<"\t";cin>>n;
if(n>0&&n<+10)
{int r;
cout<<"\tIf you want to change the number of type of drink click cancel otherwise continue......\n";
cout<<"\t\t[1] continue\n"<<"\t\t[any int] cancel\t\t\t";cin>>r;
switch(r){
case 1:
        do{
            cout<<"\tEnter your choice No.. "<<i+1<<" :";cin>>c[i];
            cout<<"\twhat quantity do you want?\n";
            cout<<"\tQ :";cin>>Q[i];
            switch(c[i])
                   {
                case 1: totprice[i]=priceOfdrink[0]*Q[i];break;
                case 2: totprice[i]=priceOfdrink[1]*Q[i];break;
                case 3: totprice[i]=priceOfdrink[2]*Q[i];break;
                case 4: totprice[i]=priceOfdrink[3]*Q[i];break;
                case 5: totprice[i]=priceOfdrink[4]*Q[i];break;
                case 6: totprice[i]=priceOfdrink[5]*Q[i];break;
                case 7: totprice[i]=priceOfdrink[6]*Q[i];break;
                case 8: totprice[i]=priceOfdrink[7]*Q[i];break;
                case 9: totprice[i]=priceOfdrink[8]*Q[i];break;
                case 10:totprice[i]=priceOfdrink[9]*Q[i];break;
                default:
                   cout<<"Invalid code input....you have only 15 types of food....\n";
                   system("pause");
                    main();
                    }
            overallprice+=totprice[i];
            i++;
          } while(i<n);
        system("cls");
        cout<<endl;
        cout<<"\t<<---Your order is --->>\n";
        cout<<endl;
        cout<<"\tNo_________Drinks_________________________Quantity________________price/unit____________Price/Quantity____";
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfdrink[c[i]-1]<<"........................"<<Q[i];
            cout<<"........................"<<priceOfdrink[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        payOption();
        paychoice();
    third:
        cout <<"\t<<<==  Enter amount to pay  ==>>>\n";
        cout<<"\t";cin>>amount;
        change=amount-overallprice;
if(change>=0){
        congra();
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<i+1<<" : "<<nameOfdrink[c[i]-1]<<"........................"<<Q[i];
            cout<<"........................"<<priceOfdrink[c[i]-1]<<" Birr..................."<<totprice[i]<<" Birr"<<endl;
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Overall Price ==>"<<overallprice<<" Birr"<<endl;
        cout<<"\t\t\t\t\t\t\t\t           _________________________________________\n";
        cout<<"\tYour Recept_________________________________________\n";
        cout<<endl;
        cout<<"\t1: Total number of menu customer order..:"<<n<<" type"<<endl;
        cout<<"\t2: Total amount customer pay............:"<<amount<<" Birr"<<endl;
        cout<<"\t3: Overall price........................:"<<overallprice<<" Birr"<<endl;
        cout<<"\t4: Change...............................:"<<change<<" Birr"<<endl;
        cout<<endl;
        thank();
      }
else
    insuff();
    goto third;
default : main();
    }
}
else
    cout<<"Invalid code input....you have only 15 types of food....\n";
    system("pause");
    system("cls");
   return main();
}
void payOption(){
    cout<<"\t<<<===Please select payment option===>>>\n";cout<<endl;
    cout<<"\t[1] Tele birr\n";
    cout<<"\t[2] CBE Birr\n";
    cout<<"\t[3] Hellow Cash |Lion Bank\n";
    cout<<"\t[4] Hellow Cash |Wegagen Bank\n";
    cout<<"\t[5] To Return to <---main page   \n ";
}
void paychoice(){int b;
 cout << endl;
 cout << "<<<<===Enter your choice option here===>>>>";
 cin >> b;
        system("cls");
        switch(b) {
            case 1:pintele();break;
            case 2:pincbe_birr();break;
            case 3:pinhello_lion();break;
            case 4:pinhello_weg();break;
            case 5:main();
            default:
                cout<<"Invalid code input....please select from list....\n";
                system("pause");break;
              }
}
void pintele(){int i=0;
  string mob,pin;
  cout<<"please enter your mobile number\n";
  cin>>mob;
  system("cls");
if(mob!="251987158100")
  {do
     {
      cout<<"this account doesn't exist\n";
      cout<<"please enter your mobile number correctly\n";
      cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!!"<<endl;
      cout<<endl;cin>>mob;
      if(mob!="251987158100"){i++;}
      else goto second;
     }while(i<3);
    cout<<"\tThis account doesn't exist...!!!!\n";
    cout<<"you are allowed to try your pin at most four(4) times \n";
    cout<<"....please try later...\n";
      system("pause");
      exit(1);
  }
else{
  second:;
  system ("cls");
  cout<<"\tplease enter your pin===>>>\n";
  cout<<"\t";cin>>pin;
    if(pin!="123456")
        {cout<<"\tyour pin is incorrect please try again...\n";
            do{
                cout<<"\tplease enter your pin correctly \n";
                cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!"<<endl;
                cout<<"\t";cin>>pin;
                if(pin!="123456"){i++;}
                else goto third;
             }while(i<4);
         cout<<"........attempt failed........\n" ;
         cout<<"you are allowed to try your pin at most four(4) times \n";
         cout<<"....please try later...\n";
         system("pause");
         exit(1);
         }
    else
     third:;}
}
void pincbe_birr(){int i=0;
  string mob,pin;
  cout<<"please enter your mobile number\n";
  cin>>mob;
  system("cls");
if(mob!="251987158101")
  {do
     {
      cout<<"this account doesn't exist\n";
      cout<<"please enter your mobile number correctly\n";
      cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!!"<<endl;
      cout<<endl;cin>>mob;
      if(mob!="251987158101"){i++;}
      else goto second;
     }while(i<3);
    cout<<"\tThis account doesn't exist...!!!!\n";
    cout<<"you are allowed to try your pin at most four(4) times \n";
    cout<<"....please try later...\n";
      system("pause");
      exit(1);
  }
else{
  second:;
  system ("cls");
  cout<<"\tplease enter your pin===>>>\n";
  cout<<"\t";cin>>pin;
    if(pin!="123455")
        {cout<<"\tyour pin is incorrect please try again...\n";
            do{
                cout<<"\tplease enter your pin correctly \n";
                cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!"<<endl;
                cout<<"\t";cin>>pin;
                if(pin!="123455"){i++;}
                else goto third;
             }while(i<4);
         cout<<"........attempt failed........\n" ;
         cout<<"you are allowed to try your pin at most four(4) times \n";
         cout<<"....please try later...\n";
         system("pause");
         exit(1);
         }
    else
     third:;}}
void pinhello_lion(){int i=0;
  string mob,pin;
  cout<<"please enter your mobile number\n";
  cin>>mob;
  system("cls");
if(mob!="251987158102")
  {do
     {
      cout<<"this account doesn't exist\n";
      cout<<"please enter your mobile number correctly\n";
      cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!!"<<endl;
      cout<<endl;cin>>mob;
      if(mob!="251987158102"){i++;}
      else goto second;
     }while(i<3);
    cout<<"\tThis account doesn't exist...!!!!\n";
    cout<<"you are allowed to try your pin at most four(4) times \n";
    cout<<"....please try later...\n";
      system("pause");
      exit(1);
  }
else{
  second:;
  system ("cls");
  cout<<"\tplease enter your pin===>>>\n";
  cout<<"\t";cin>>pin;
    if(pin!="123454")
        {cout<<"\tyour pin is incorrect please try again...\n";
            do{
                cout<<"\tplease enter your pin correctly \n";
                cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!"<<endl;
                cout<<"\t";cin>>pin;
                if(pin!="123454"){i++;}
                else goto third;
             }while(i<4);
         cout<<"........attempt failed........\n" ;
         cout<<"you are allowed to try your pin at most four(4) times \n";
         cout<<"....please try later...\n";
         system("pause");
         exit(1);
         }
    else
     third:;}}
void pinhello_weg(){int i=0;
  string mob,pin;
  cout<<"please enter your mobile number\n";
  cin>>mob;
  system("cls");
if(mob!="251987158103")
  {do
     {
      cout<<"this account doesn't exist\n";
      cout<<"please enter your mobile number correctly\n";
      cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!!"<<endl;
      cout<<endl;cin>>mob;
      if(mob!="251987158103"){i++;}
      else goto second;
     }while(i<3);
    cout<<"\tThis account doesn't exist...!!!!\n";
    cout<<"you are allowed to try your pin at most four(4) times \n";
    cout<<"....please try later...\n";
      system("pause");
      exit(1);
  }
else{
  second:;
  system ("cls");
  cout<<"\tplease enter your pin===>>>\n";
  cout<<"\t";cin>>pin;
    if(pin!="123453")
        {cout<<"\tyour pin is incorrect please try again...\n";
            do{
                cout<<"\tplease enter your pin correctly \n";
                cout<<"\t<<==Warning==>> : you have only :"<<3-i<<" chance remain...!!"<<endl;
                cout<<"\t";cin>>pin;
                if(pin!="123453"){i++;}
                else goto third;
             }while(i<4);
         cout<<"........attempt failed........\n" ;
         cout<<"you are allowed to try your pin at most four(4) times \n";
         cout<<"....please try later...\n";
         system("pause");
         exit(1);
         }
    else
     third:;}}
void insuff(){
cout<<"\t*************************************************************************\n";
    cout<<"\t<<==Enter amount is not enough to pay....\n";
    cout<<"\t<<==Please insert sufficient amount..\n";
    system("pause");
    system("cls");}
void congra(){
system("cls");
        cout<<endl;
        cout<<"\t\t*************************************************************************\n";
        cout<<"\t\t|   <<<<=== CONGRATULATION TRANSACTION COMPLETED SUCCESSFULLY ===>>>>   |\n";
        cout<<"\t\t*************************************************************************\n";
        cout<<endl;
        cout<<"\tNo_________Item_________________________Quantity________________price/unit____________Price/Quantity____";
        cout<<endl;}
 void thank(){
        cout<<endl;
        cout<<"\t****************************************************************************************\n";
        cout<<"\t|   <<<<=== THANKS FOR USING OUR RESTAURANT SERVICE ===>>>>                            |\n";
        cout<<"\t|                                                                                      |\n";
        cout<<"\t|We will send SMS for your Ticket number and the Time of order delivered soon.....     |\n";
        cout<<"\t|      Please check your SMS inbox  ..........                                         |\n";
        cout<<"\t****************************************************************************************\n";
         system("pause");
         main();
 }
