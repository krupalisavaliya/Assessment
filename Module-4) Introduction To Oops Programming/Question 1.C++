#include <iostream>
#include <string>
using namespace std;

int main()
{

    int choice, quantity, am, Total = 0;
    int Marghrita_pizza = 140, Seven_Cheese_pizza = 240, Veg_Spring_pizza = 200;
    int Party_lover_pizza = 210, Garden_Feast_pizza = 220, choise;
    int veg_burger = 70, Crunchy_Veg_Burger = 80, Cafe_Special_Burger = 120, Allo_Tikki_Burger = 80, Lamb_Burger = 140;
    int Chease_Masala = 160, Culb_Sandwitch = 240, Veg_Crispy_sandwitch = 160, Extream_Veg_Sandwitch = 100, Cheese_Chily = 150;
    int Veg_Roll = 80, Allo_Roll = 90, Paneer_Roll = 100, Double_Paneer_Roll = 120, Allo_Gobi_Roll = 100;
    int Veg_Biryani = 120, Hydrabadi_Biryani = 150, Paneer_Biryani = 190, Veg_Pulav = 140, Double_paneer_Biryani = 220;
    string name;
    char ans = 'y';
    cout << "\nPlease Enter Your name : ";
    cin >> name;
    cout << "\n";
    cout << "hello " << name;
    while (ans == 'y')
    {

        cout << "\n";
        cout << "What would you like to order?";
        cout << "\n";
        cout << "---------menu----------";
        cout << "\n1) pizzas";
        cout << "\n2) Burgers";
        cout << "\n3) Sandwitch";
        cout << "\n4) Rolls";
        cout << "\n5) Biryani";
        cout << "\n";
        cout << "\nPlase enter your choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "\n1) Margherita Pizza = " << Marghrita_pizza << " INR ";
            cout << "\n2)Seven Cheese pizza = " << Seven_Cheese_pizza << " INR ";
            cout << "\n3) Veg Spring pizza = " << Veg_Spring_pizza << " INR ";
            cout << "\n4) Party lover pizza = " << Party_lover_pizza << " INR ";
            cout << "\n5) Garden Feast pizza = " << Garden_Feast_pizza << " INR ";
            cout << "\n";
            cout << "\nPlease Enter Which Pizza you Would like to have (1-5) : ";
            cin >> choise;
            cout << "\n";

            switch (choise)
            {

            case 1:

                cout << "\nYou have Selected Margherita Pizza.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Marghrita_pizza * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 2:

                cout << "\nYou have Selected Seven Cheese pizza.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Seven_Cheese_pizza * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 3:

                cout << "\nYou have Selected Veg Spring pizza.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Veg_Spring_pizza * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 4:

                cout << "\nYou have Selected Party lover pizza.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Party_lover_pizza * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 5:

                cout << "\nYou have Selected Garden Feast pizza.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Garden_Feast_pizza * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;

            default:
                cout << "\nInvail input number.";
                break;
            }
            break;

        case 2:

            cout << "\n1) Veg Burger = " << veg_burger << " INR ";
            cout << "\n2)Crunchy Veg Burger = " << Crunchy_Veg_Burger << " INR ";
            cout << "\n3) Cafe Special Burger = " << Cafe_Special_Burger << " INR ";
            cout << "\n4) Allo Tikki Burger = " << Allo_Tikki_Burger << " INR ";
            cout << "\n5) Lamb Burger = " << Lamb_Burger << " INR ";
            cout << "\n";
            cout << "\nPlease Enter Which Burger you Would like to have (1-5) : ";
            cin >> choise;
            cout << "\n";

            switch (choise)
            {

            case 1:

                cout << "\nYou have Selected Veg Burger.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = veg_burger * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 2:

                cout << "\nYou have Selected Crunchy Veg Burger.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Crunchy_Veg_Burger * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 3:

                cout << "\nYou have Selected Cafe Special Burger.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Cafe_Special_Burger * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 4:

                cout << "\nYou have Selected Allo Tikki Burger .";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Allo_Tikki_Burger * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 5:

                cout << "\nYou have Selected Lamb Burger.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Lamb_Burger * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;

            default:
                cout << "\nInvail input number.";
                break;
            }
            break;

        case 3:

            cout << "\n1) Chease Masala Sandwitch = " << Chease_Masala << " INR ";
            cout << "\n2) Culb Sandwitch = " << Culb_Sandwitch << " INR ";
            cout << "\n3) Veg Crispy sandwitch = " << Veg_Crispy_sandwitch << " INR ";
            cout << "\n4) Extream Veg. Sandwitch = " << Extream_Veg_Sandwitch << " INR ";
            cout << "\n5) Cheese Chily = " << Cheese_Chily << " INR ";
            cout << "\n";
            cout << "\nPlease Enter Which Sandwitch you Would like to have (1-5) : ";
            cin >> choise;
            cout << "\n";

            switch (choise)
            {

            case 1:

                cout << "\nYou have Selected Chease Masala.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Chease_Masala * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 2:

                cout << "\nYou have Selected Culb Sandwitch.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Culb_Sandwitch * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 3:

                cout << "\nYou have Selected Veg Crispy sandwitch.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Veg_Crispy_sandwitch * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 4:

                cout << "\nYou have Selected Extream Veg. Sandwitch.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Extream_Veg_Sandwitch * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 5:

                cout << "\nYou have Selected Cheese Chily.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Cheese_Chily * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;

            default:

                cout << "\nInvaild input number.";
                break;
            }
        break;
        case 4:

            cout << "\n1) Veg Roll = " << Veg_Roll << " INR ";
            cout << "\n2) Allo Roll = " << Allo_Roll << " INR ";
            cout << "\n3) Paneer Roll = " << Paneer_Roll << " INR ";
            cout << "\n4) Double Paneer Roll = " << Double_Paneer_Roll << " INR ";
            cout << "\n5) Allo Gobi Roll = " << Allo_Gobi_Roll << " INR ";
            cout << "\n";
            cout << "\nPlease Enter Which Roll you Would like to have (1-5) : ";
            cin >> choise;
            cout << "\n";

            switch (choise)
            {

            case 1:

                cout << "\nYou have Selected Veg Roll.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Veg_Roll * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 2:

                cout << "\nYou have Selected Allo Roll.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Allo_Roll * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 3:

                cout << "\nYou have Selected Paneer Roll.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Paneer_Roll * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 4:

                cout << "\nYou have Selected Double Paneer Roll.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Double_Paneer_Roll * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 5:

                cout << "\nYou have Selected Allo Gobi Roll.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Allo_Gobi_Roll * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;

            default:

                cout << "\nInvaild input number.";
                break;
            }
             break;
        case 5:

            cout << "\n1) Veg Biryani = " << Veg_Biryani << " INR ";
            cout << "\n2) Hydrabadi Biryani  = " << Hydrabadi_Biryani << " INR ";
            cout << "\n3) Paneer Biryani = " << Paneer_Biryani << " INR ";
            cout << "\n4) Veg Pulav = " << Veg_Pulav << " INR ";
            cout << "\n5) Double paneer Biryani = " << Double_paneer_Biryani << " INR ";
            cout << "\n";
            cout << "\nPlease Enter Which Biryani you Would like to have (1-5) : ";
            cin >> choise;
            cout << "\n";

            switch (choise)
            {

            case 1:

                cout << "\nYou have Selected Veg Biryani.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Veg_Biryani * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 2:

                cout << "\nYou have Selected Hydrabadi Biryani.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Hydrabadi_Biryani * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 3:

                cout << "\nYou have Selected Paneer Biryani.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Paneer_Biryani * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 4:

                cout << "\nYou have Selected veg Pulav.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Veg_Pulav * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;
            case 5:

                cout << "\nYou have Selected Double Paneer Biryani.";
                cout << "\n";
                cout << "Please Enter Quantity : ";
                cin >> quantity;
                am = Double_paneer_Biryani * quantity;
                Total += am;
                cout << "\nAmount = " << am;
                cout << "\nTotal Amount = " << Total;
                break;

            default:

                cout << "\nInvaild input number.";
                break;
            }
            break;
            // default :
            //             cout<<"\nInvaild Input.";
            // break;
        }
        cout << "\n\n Do You Want to Continue y/n ? : ";
        cin >> ans;
        if (ans != 'y')
        {
            goto end;
        }
        else
        {
            cout << "\n";
        }
    }
end:
    cout << "\n\tYour Total bill = " <<Total;
    cout << "\n\tThank You For Visiting";
    return 0;
}