#include <bits/stdc++.h>
using namespace std;
class Invoice {
private:
  string partNumber;
  string partDescription;
                     
  int itemQuantity;
  int pricePerItem;

public:
  Invoice(string, string, int, int);
                     
  // SETTERS
  void setPartNumber(string);
  void setPartDescription(string);
  void setItemQuantity(int);
  void setPricePerItem(int);
                     
  // GETTERS
  string getPartNumber();
  string getPartDescription();
  int getItemQuantity();
  int getPricePerItem();
                     
  int getInvoiceAmount();
};
// Constructor
Invoice::Invoice(string number, string description, int quantity,
  int price) {
  setPartNumber(number);
  setPartDescription(description);
  setItemQuantity(quantity);
  setPricePerItem(price);
}
// SETTERS
void Invoice::setPartNumber(string number) {
  partNumber = number;
}
                     
void Invoice::setPartDescription(string description) {
  partDescription = description;
}
void Invoice::setItemQuantity(int quantity) {
  itemQuantity = (quantity > 0) ? quantity : 0;
}
void Invoice::setPricePerItem(int price) {
  pricePerItem = (price > 0) ? price : 0;
}
// GETTERS
string Invoice::getPartNumber() { return partNumber; }
                     
string Invoice::getPartDescription() { return partDescription; }
                     
int Invoice::getItemQuantity() { return itemQuantity; }
                     
int Invoice::getPricePerItem() { return pricePerItem; }
                     
// calcualates the invoice amount
int Invoice::getInvoiceAmount() { return itemQuantity * pricePerItem; }
                     
int main(int argc, const char *argv[]) {
  Invoice invoice1("12345", "hatodaa", 22, 5);
                     
  cout << "Part Number: " << invoice1.getPartNumber();
  cout << "\nPart Description: " << invoice1.getPartDescription();
  cout << "\n" << invoice1.getItemQuantity() << " x " << invoice1.getPricePerItem();
  cout << " = " << invoice1.getInvoiceAmount() << endl;
                     
  return 0;
}