// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      // 1. Write the Default Constructor
      Item();
      // 2. Write the Overloaded Constructor
      Item(int itCode, float unPrice);
      // 3. Write the Destructor
      ~Item();

      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
