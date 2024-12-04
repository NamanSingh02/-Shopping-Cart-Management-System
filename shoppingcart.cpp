// Made by Naman Singh, May 2023
#include<iostream>
#include<cstring>
using namespace std;
class items{
  public:
  char itemname[10];
  int price;
  int quantity;
  int number;
  void details_of_items(items o[3]){
    strcpy(o[0].itemname,"apples");
    strcpy(o[1].itemname,"oranges");
    strcpy(o[2].itemname,"mangoes");
    o[0].number=1;
    o[1].number=2;
    o[2].number=3;
    o[0].price=10;
    o[1].price=20;
    o[2].price=30;
    o[0].quantity=0;
    o[1].quantity=0;
    o[2].quantity=0;
  }
}o[3];
void input(){
  cout<<"PLEASE NOTE:if the same item is added more than once, the quantity number entered later will be considered\n";
  int a=1;
  while(a!=0){
    cout<<"\nif you wish to add something to cart press the item number of the item and ";
    cout<<"if you wish to confirm the order press 0\n";
    cin>>a;
    if(a!=0){
      cout<<"enter quantity\n";
      cin>>o[a-1].quantity;
    }
  }
}
void price(){
  int price=0;
  for(int i=0;i<3;i++){
    price+=(o[i].quantity)*(o[i].price);
  }
  cout<<"total price is "<<price<<endl;
}
void show(){
  cout<<"\nyour shopping cart is as follows\n";
  cout<<"item name"<<"     "<<"quantity\n";
  for(int i=0;i<3;i++){
    if(o[i].quantity!=0){
      cout<<o[i].itemname<<"          "<<o[i].quantity<<endl;
    }
  }
}
int main(){
  cout<<"welcome to our shopping software\n";
  o[0].details_of_items(o);
  cout<<"Items available are:\n";
  cout<<"item name"<<"    "<<"price"<<"   item number"<<endl;
  for(int i=0;i<3;i++){
    cout<<o[i].itemname<<"       "<<o[i].price<<"        "<<o[i].number<<endl;
  }
  input();
  show();
  cout<<endl;
  price();
  int a;
  cout<<"\nif the shopping cart and price shown is correct kindly press 1 if not then press 2\n";
  cin>>a;
  int b;
  if(a==1){
    cout<<"\nkindly confirm the payment method\nfor cash on delivery press 1 and for card payment press 2\n";
    cin>>b;
    if(b==1){
      cout<<"\nTHANKYOU for considering us for your order.";
      cout<<endl<<"your order is being processed you have to pay the money when the order reaches your home"<<endl;
    }
    else{
       cout<<"THANKYOU for considering us for your order.";
      cout<<endl<<"your order is being processed kindly pay the money using card"<<endl;
    }
  }
  else{
    while(a!=1){
      o[0].details_of_items(o);
      cout<<"sorry for the inconvenience kindly create the cart again :)"<<endl;
    input();
    show();
    cout<<endl;
    price();
    cout<<"\nif the shopping cart and price shown is correct kindly press 1 if not then press 2\n";
    cin>>a;
    }
    cout<<"\nkindly confirm the payment method\nfor cash on delivery press 1 and for card payment press 2\n";
    cin>>b;
    if(b==1){
      cout<<"\nTHANKYOU for considering us for your order.";
      cout<<endl<<"your order is being processed you have to pay the money when the order reaches your home"<<endl;
    }
    else{
      cout<<"THANKYOU for considering us for your order.";
      cout<<endl<<"your order is being processed kindly pay the money using card"<<endl;
    }
  }
  char feedback[100];
  cout<<endl<<"kindly give a feedback regarding your experience. It really helps us to improve!";
  cout<<endl;
  cin.ignore();
  cin.getline(feedback,100);
  cout<<endl<<endl;
  system("pause");
}




