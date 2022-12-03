#include<iostream>
#include<fstream>

using namespace std;
//global veriables
int qut[20];
int choice;
int date,month,year;
bool login = false;

class Items{
protected:

    int itemNum;
    int qu;
    float price;
    float itemPrice[20];
    int itemNo[20];
    string itemName[20];

    int qu1 = 0;
    int qu2 = 0;
    int qu3 = 0;

    int i = 0;

private:
    string psswrd;
    string usr;
    string user = "Admin";
    string pswd = "1234";

   // int date,month,year;


    void datePassword()
    {
        for(int i=0;i<120;i++)
        {
            for(int a=0;a<10000000;a++)
            {

            }
            cout << "_";
        }
        system("CLS");
        cout << "                     --- LOGIN ---" << endl << endl;

        cout << "User name    :";
        cin >> usr;
        cout << "Password     :";
        cin >> psswrd;

        cout << "\nDATE -  (DATE/MONTH/YEAR) " ;
        cin >> date ; cin >> month ; cin >> year ;



    }
    public:
        void getpsswrd()
        {
            datePassword();
            if(usr == user && psswrd == pswd)
            {
            login = true;
            }

        }
void items1()
{

        system("CLS");
    cout << "\n+--------------------------------------------------------------------------------------------------------------+" << endl;
    cout << "\n                   \t    <|>~~~ +"  ;
      for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "C " ;
        }

         for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "H " ;
        }

         for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "E " ;
        }

         for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "A " ;
        }

         for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "P   " ;
        }

        for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "M " ;
        }
        for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "A " ;
        }
        for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "R " ;
        }
        for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
            cout << "T" ;
        }
        for(int i=0;i<1;i++)
        {
            for(int a=0;a<50000000;a++)
            {

            }
        }

        cout << "+ ~~~<|>" << endl << endl;

       /* cout << "DATE -  (DATE/MONTH/YEAR) " ;
        cin >> date ; cin >> month ; cin >> year ;*/

        do{

        cout << "\n   Hi! "<< "Admin"  << "__________________________W E L C O M E__________________________Date- " << date << "/" << month << "/" << year ;
            if(month == 4)
        cout << "\n\n\t\t\t++++ HAPPY SINHALA AND TAMIL NEW YEAR ++++" << endl << endl;
            else if(month == 12)
        cout << "\n\n\t\t\t\t++++ HAPPY CHRISTMASE ++++" << endl << endl;
        cout << "\n\n\t\t\t\t|*|BILLING SYSTEM (Press 1) \n\t\t\t\t|*|INPUT ITEMS    (press 2) " << endl;
         cout << "\n+--------------------------------------------------------------------------------------------------------------+" << endl << endl;

        cout << "What do you want to do? (1/2) - " ;
        cin >> choice;

            if(choice != 1 && choice != 2 )
            {
            cout << "\nInvalid number TRY AGAIN !!!!!" << endl;
             for(int i=0;i<1;i++)
        {
            for(int a=0;a<500000000;a++)
            {

            }
        }
            system("CLS");
            }
        }while(choice != 1 && choice != 2);
}

     Items()
    {

        itemPrice[0] = 10;//soap
        itemPrice[1] = 5;//chocolate
        itemPrice[2] = 6;//ice cream 1L

        itemName[0] = "Soap";
        itemName[1] = "Chocolate";
        itemName[2] = "Ice-Cream";

        itemNo[0] = 0;
        itemNo[1] = 1;
        itemNo[2] = 2;

         ofstream outitem("Items.txt",ios::out);

            outitem.seekp(5,ios::beg);
            outitem << "-ITEM DETAILS-" << endl;
            outitem << "\n" << itemName[0] << "         - Rs." << itemPrice[0] << "       - quantity " << qut[0]<< endl;
            outitem << itemName[1] << "    - Rs." << itemPrice[1] << "        - quantity " << qut[1]<< endl;//------------------------------------------------------------
            outitem << itemName[2] << "    - Rs." << itemPrice[2] << "        - quantity " << qut[2]<< endl;//this part also added to check availability of items in file. Sir after enter some items and check this file---------------------------------------------------
                                                                                                           //you can see quantities of those item as show in the availability section in the software.

        outitem.close();

}

    virtual void display() = 0; // this virtual function is used to display the calculation of the bill


    ~Items()
    {

    }

};

class ItemBill:public Items{
protected:

    int billNo;
    float total = 0.00;
    //for quantities;

public:

    void itemBill1()
    {



        if(choice == 1)
        {
            system("CLS");
            system("color 0B");
            for(int i=0;i<5;i++)
        {
            for(int a=0;a<100000000;a++)
            {

            }
            cout << ". ";
        }
        system("CLS");

            cout << "\n\n\t\t  ____BLLING SYSTEM___" << endl << endl;
            if(qut[0] != 0 || qut[1] != 0 || qut[2] != 0 )
            {
            cout << "\n-ITEM NUMBERS-\n\n" << itemName[0] << "      = " << itemNo[0] << "\n" << itemName[1] << " = " <<  itemNo[1] << "\n" << itemName[2] << " = " <<  itemNo[2] ;
            }
            if(itemNo[3] == 4)
            {
                cout << "\n" << itemName[3] << " = " << itemNo[3] << endl << endl ;
            }
            else if(itemNo[4] == 5)
            {
                cout << "\n" <<itemName[4] << " = " << itemNo[4] << endl << endl;
            }
            else
            {
                cout << endl << endl;
            }

        }


    }
    void billInput()
    {
        do{

            cout << "Enter the itemNo               - ";
            cin >> itemNum;

            if(itemNum != 0 && itemNum != 1 && itemNum != 2)
            {
               cout <<  "\n  Invalid Item Number!!" << endl;

            }
        }while(itemNum != 0 && itemNum != 1 && itemNum != 2);

            cout << "Enter the Number Of quantities - ";
            cin >> qu;

    }
protected:

    void calculation()
    {

    if(qut[itemNum] > 0)
         switch(itemNum)
            {
                case 0:
                total += itemPrice[0] * qu;
                qu1 += qu;
                break;

                case 1:
                total += itemPrice[1] * qu;
                qu2 += qu;
                break;

                case 2:
                total += itemPrice[2] * qu;
                qu3 += qu;
                break;

                case 3:
                total += itemPrice[3] * qu;
                break;

                case 4:
                total += itemPrice[4] * qu;
                break;

                default:
                break;
            }




    }
public:
    void warningM()
    {

        if(qut[0] == 0 && qut[1] == 0 && qut[2] == 0 )
        {
            system("color 74");
            cout << "\n\t\t!!! The stock is empty !!!" <<  endl;
            i = 0;

        }
        if(qut[0] != 0 || qut[1] != 0 || qut[2] != 0 )
        {
        if(qut[0] < 5)
        {
            system("color E4");
            cout << "!!!!! Stock Of 'Soap' Is Law !!!!! " << endl;
            cout << "There are only " << qut[0] << " quantities in the stock" << endl << endl;
        }
        if(qut[1] < 5)
        {
            system("color E4");
            cout << "!!!!! Stock Of 'Chocolate' Is Law !!!!! " << endl;
            cout << "There are only " << qut[1] << " quantities in the stock" << endl << endl;
        }
        if(qut[2] < 5)
        {
            system("color E4");
            cout << "!!!!! Stock Of 'Ice-Cream' Is Law !!!!! " << endl;
            cout << "There are only " << qut[2] << " quantities in the stock" << endl << endl;
        }
        if(itemNo[3] == 3)
        {
        if(qut[3] < 5)
        {
            system("color E4");
            cout << "!!!!! Stock Of " << itemName[3] << " Is Law !!!!! " << endl;
            cout << "There are only " << qut[3] << " quantities in the stock" << endl << endl;
        }
        }
        /*if(itemNo[3] == 4)
        {
        if(qut[4] < 5)
        {
            system("color E4");
            cout << "!!!!! Stock Of " << itemName[4] << " Is Law !!!!! " << endl;
            cout << "There are only " << qut[4] << " has in the stock" << endl << endl;
        }

        }*/
    }
    }

};

class seasonItemBill:public ItemBill{
private :
    float disRate;
    float disRateTotal = 0;

protected:
    float cardDiscount = 0;
     float payment;
public:
    void setdisRate(float a)
    {
        disRate = a;

    }
private:
    float discalculate()
    {
        if(month == 4 || month == 12)
        {
        disRateTotal = total * disRate;
        }

        return disRateTotal;
    }

public:
    void display()
    {
        char addmore;
        do{
            if(qut[0] == 0 && qut[1] == 0 && qut[2] == 0 && i == 0)
            {
                break;
            }

        billInput();
         if(qut[itemNum] == 0)
            {
                cout << "!!!!!Those are out of stock. Add items!!!!! " << endl << endl;
               // break;
            }
             else if(qu > qut[itemNum])
            {
                cout << "  There are no enough quantities!!!\n " << endl;
               // break;
            }
            else if(qut[itemNum] == 0)
            {
                cout << "!!!!!Those are out of stock. Add items!!!!! " << endl << endl;
                //break;
            }

            else if(qut[itemNum] > 0)
              {

                calculation();
                cardDiscount = (total * 0.07);

              }

            qut[itemNum] = qut[itemNum] - qu;

            if(qut[itemNum] < 0)
            {
                qut[itemNum] = qut[itemNum] + qu;
            }

             if(qut[0] == 0 && qut[1] == 0 && qut[2] == 0)
            {
                i = 1;
            }


        do{
        cout << "\nDo you want add more(y/n)                - ";
        cin >> addmore;

        cout << endl ;

       /* if(addmore == 'n')
        {
            break;
        }*/
        if(addmore != 'y' && addmore != 'n')
        {
            system("color 4");
            cout << "invalid input !!!!!" << endl << endl;
        }
        }while(addmore != 'y' && addmore != 'n');

        if(addmore == 'y' || addmore == 'n')
        {


        }

       }while(addmore == 'y');

    }


    void disDisplay()
    {
        //float tot =  qut[itemNum] - qu;
        float dical = discalculate();

    //if( qut[itemNum] > 0)

      //  {
        if(qut[0] == 0 && qut[1] == 0 && qut[2] == 0 && i == 0)
        {
            i++;
            cout << "\t\t- Bills Can't Be Calculated -" << endl << endl;
        }

        else
        {
            cout << "  \n-Payment Method-\n" << endl;
            cout << "Press(1) Credit Card / press(2) Cash - ";
            cin >> payment;
         if(payment == 1)
       {
           total -= cardDiscount;
           cout << cardDiscount << endl;
       }
        ofstream outf("superMarket.txt",ios::app);
        outf << "total            = " << total << endl;//here this part I have modified to get all the bill details to the file -------------------------------------------------------------------------------
        outf << "discounted total = " << dical << endl;
        outf << "CreditCard       = " << cardDiscount << endl;
        outf << "date             = " << date << "/" << month << "/" << year << "\n" << endl;


        outf.close();

        system("CLS");
            cout << "-------------------------------------------------------" << endl << endl;

            cout << "   -INVOICE-" << endl << endl;
            cout << "\t\t<|>~~~ +CHEAP MART+ <|>~~~" << endl<< endl;
        ofstream outsold("SoldItems.txt",ios::out);

            if(qu1 > 0)
            {
                cout << itemName[0] << " \t  - " << qu1 << "   -  Rs." << itemPrice[0] << endl;
                outsold << itemName[0] << " \t  - " << qu1 << "   -  Rs." << itemPrice[0] << endl;

            }

            if(qu2 > 0)
            {
                cout << itemName[1] << " - " << qu2 << "  -  Rs." << itemPrice[1] <<  endl;
                outsold << itemName[1] << " - " << qu2 << "  -  Rs." << itemPrice[1] <<  endl;
            }

            if(qu3 > 0)
            {
                cout << itemName[2] << " - " << qu3 << "  -  Rs." << itemPrice[2] << endl;
                outsold << itemName[2] << " - " << qu3 << "  -  Rs." << itemPrice[2] << endl;
            }

            cout << endl;


        if(month == 4 || month == 12)
        {

            if(month == 4)
                cout << "\n   ++++ NEW YEAR OFFER ! ! ! ! ++++" << endl << endl;
            else if(month == 12)
                cout << "\n   ++++ CHRISTMASE OFFER ! ! ! ! ++++" << endl << endl;

            if(payment == 1)
            {
            cout << "-You Have Got Rs." << cardDiscount << " Offer For Credit Card Payment-" << endl;
            }
            cout << "Discount   - Rs." << total - dical << " /="  << endl;
            cout << "TOTAL      - Rs." << dical << " /="<< endl;

       }

        else
        {
            //qut[itemNum] = qut[itemNum] - qu;

           /* ifstream inf1("superMarket.txt",ios::in);

            inf1 >> total;*/
           // inf1 >> cardDiscount;
            if(payment == 1)
            {
            cout << "-You Have Got Rs." << cardDiscount << " Offer For Credit Card Payment-" << endl;
            }
            cout << "\nTOTAL - Rs. " << total << " /="<< endl;

            //inf1.close();
        }


            cout << "\nDATE  -" << date << "/" << month << "/" << year << endl;
            cout << "48 Ward Pl, Colombo 007" << endl;
            cout << "COME AGAIN ! " << endl;
            cout << "-------------------------------------------------------" << endl;

        }

      }


};


class InputItems:public seasonItemBill{
    int input;
    int noOfItems;
    int add;
    int itemadd;
    char moreItem;
public:

    void inputitems()
    {

//        if(choice == 2)
                system("color A0");
                system("CLS");
                for(int i=0;i<5;i++)
                {
                    for(int a=0;a<100000000;a++)
                    {

                    }
                cout << ". ";
                }
                system("CLS");
                do{
                cout << "\n   _____INPUT ITEMS AND ADD AVAILABILITY OF ITEMS_____" << endl << endl;

                cout << "Input Items (press 1)/Availability (press 2) -";
                cin >> add;

                if(add != 1 && add != 2)
                {
                    system("color 4");
                    cout << "\n              Invalid Input !!! " << endl << endl;
                    for(int i=0;i<5;i++)
                        {
                            for(int a=0;a<100000000;a++)
                                {

                                }
                        }
                        system("CLS");
                }
                }while(add != 1 && add != 2);
                       for(int i=0;i<5;i++)
                        {
                            for(int a=0;a<100000000;a++)
                                {

                                }
                        cout << ". ";
                        }

             do{
                system("CLS");
                cout << "\n   _____INPUT ITEMS AND ADD AVAILABILITY OF ITEMS_____" << endl << endl;


            switch(add)
            case 1 :
            {

        {
            system("color A0");
            cout << "\n-ITEM NUMBERS-\n\n" << itemName[0] << "      = " << itemNo[0] << "\n" << itemName[1] << " = " <<  itemNo[1] << "\n" << itemName[2] << " = " <<  itemNo[2] ;
            if(itemNo[3] == 4)
            {
                cout << "\n" << itemName[3] << " = " << itemNo[3] << endl << endl ;
            }
            else if(itemNo[4] == 5)
            {
                cout << "\n" <<itemName[4] << " = " << itemNo[4] << endl << endl;
            }
            else
            {
                cout << endl << endl;
            }

                cout << "Which item do you want to input          : " ;
                cin >> input;

                if(input != 0 && input != 1 && input != 2)
                {
                    system("color 4");
                    cout << "\n     Invalid Input !!" << endl;
                    break;

                }

                cout << "How many quantities do you want to input : ";
                cin >>noOfItems;

                qut[input] = qut[input] + noOfItems;
                cout << "\nProcessing";
                        for(int i=0;i<4;i++)
                            {
                            for(int a=0;a<200000000;a++)
                                {

                                }
                                    cout << ".";
                            }
                system("CLS");
                system("color 2");
                cout << "\n -Items have been added successfully-\n" << endl;


                do{
                cout << "ADD MORE press(y/n) \t\t\t - ";
                cin >> moreItem ;
                if(moreItem != 'y' && moreItem != 'n')
                {
                    system("color 4");
                    cout << "\n               Invalid input !!!!" << endl << endl;
                }

                break;

                }while(moreItem != 'y' && moreItem != 'n');

       }
        }


         }while(moreItem == 'y');

         switch (add)
         {
         case 2:
             system("color 02");
            ifstream in("Items.txt");//also here sir I got them as output that what is in the file Items-----------------------------------------------------------------------------------
            string p;
            while(getline(in,p))
                {
                    cout << p << endl;
                }
            break;

         }


    }
};

int main()
{
    char want;
   // int i = 0;

    Items *obj1;

    seasonItemBill obj2;
    obj1 = &obj2;
    obj1 ->getpsswrd();
    if(login == true)
    {

do{
    system("color 70");
    Items *obj1;

    seasonItemBill obj2;

    obj1 = &obj2;
    obj1->items1();
    obj2.itemBill1();

    InputItems obj3;
    if(choice == 2)
    {

    obj3.inputitems();
    obj2.itemBill1();
    }
    else{

    obj2.setdisRate(0.9);

    obj2.warningM();
    obj1 ->display();


    obj2.disDisplay();
    }
    do{
    cout << "\nDo you want to do more functions ? (y/n) - " ;
    cin >> want;
    cout << endl;
    if(want != 'y' && want != 'n')
    {
        system("color 4");
        cout << "          Invalid Input!!" << endl ;
        for(int i=0;i<4;i++)
                {
                    for(int a=0;a<30000000;a++)
                    {

                    }

                }

    }
     system("CLS");
    }while(want != 'y' && want != 'n');
    system("CLS");

}while(want == 'y');

    }
     else
    {

        system("color 04");
        cout << "\ninvalid password or user name TRY AGAIN !" << endl;
        for(int i=0;i<4;i++)
                {
                    for(int a=0;a<300000000;a++)
                    {

                    }

                }
    }


        system("CLS");
        system("color F0");
        for(int i=0;i<120;i++)
                {
                    for(int a=0;a<3000000;a++)
                    {

                    }
                    cout << "_";
                }
    cout << "\n \n                  \t\t\t\tHave a Nice Day!" << endl;
        for(int i=0;i<120;i++)
                {
                    for(int a=0;a<1000000;a++)
                    {

                    }
                    cout << "_";
                }


}
