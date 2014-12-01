#include "../Inventory-Class-Hierarcy/EmployeeList.h"
#include "../Inventory-Class-Hierarcy/List.h"
#include "../Item-Class-Hierarchy/Item.h"
#include "../Transaction-Class-hierarchy/StoreOrder.h"
#include "../Inventory-Class-Hierarcy/InventoryList.h"
#include <string>

using namespace std;
class BookStoreSystem
{
public:
    BookStoreSystem();
    BookStoreSystem(string storeName, string storeAddress);
    BookStoreSystem(string storeName, string storeAddress, string invPATH, string empPATH, string tranPATH);
    ~BookStoreSystem();

protected:
    InventoryList * inventory;
    EmployeeList  * employeeListing;
    InventoryList * transactionsList; //RENAME TO TransactionList * ....

    string storeName;
    string storeAddress;
    string invPATH;
    string empPATH;
    string tranPATH;

public:
    void menu();
    bool login();
    void makeOrder();
    void searchInventory() const;

private:
    void adjustSalePrice();

    void showInventory() const;
    void showTransactions() const;
    void showEmployees() const;

    void modifyInventory();       //add, subtract, edit an Item
    void addItem();             //add item
    void removeItem(Item * targetItem);          //subtract Item
    void editItem(Item * targetItem);             //edit Item properties

    void modifyTransactions();    //add, subtract, edit a Transaction
    void addTransaction();
    void removeTransaction(Transaction * targetTransaction);
    void editTransaction(Transaction * targetTransaction);

    void modifyEmployees();       //add, subtract, edit an Employee
    void addEmployee();             
    void removeEmployee(Person * targetPerson);
    void editEmployee(Person * targetPerson);
};
