#include <iostream>
using namespace std;
class Shop
{ // class declaration
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter the Id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop SaravnaStore;
    SaravnaStore.initCounter();
    SaravnaStore.setPrice();
    SaravnaStore.displayPrice();

    return 0;
}