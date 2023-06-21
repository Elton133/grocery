#include <iostream>
#include <map>
using namespace std;

int main() {
	cout <<" FAVOUR'S GROCERY STORE" << endl;
	
	
	map<string, double> groceryPrices;
	   groceryPrices["tomatoes"]  = 45;
	   groceryPrices["onions"]  = 38;
	    groceryPrices["cabbages"] = 60;
	    groceryPrices["spinach"]  = 50.50;
	     groceryPrices["lettuce"]  = 50.75;
	     groceryPrices["broccoli"]  = 40;
	      groceryPrices["celery"] = 20;
	      groceryPrices["chilli_pepper"] = 15.30;
	       groceryPrices["potato"]  = 40;
	       groceryPrices["beans"] = 50;
	        groceryPrices["cucumber"] = 40;
	        groceryPrices["beetroot"]  = 65;
	         groceryPrices["carrot"] = 35;
	         groceryPrices["cauliflower"] = 42.5;
	          groceryPrices["peas"]  = 20;
	          groceryPrices["green_pepper"]  = 30;
	           groceryPrices["corn"]  = 50;
	           groceryPrices["garlic"] = 14.5;
	            groceryPrices["yellow_bell_pepper"] = 40;
	            groceryPrices["mushrooms"]  = 75.5;
	             groceryPrices["brussels"]  = 25;
	             groceryPrices["asparagus"]  = 14.6;
	              groceryPrices["kale"]  = 9.5;
	              groceryPrices["parsley"]  = 8.5;
	               groceryPrices["rosemary"] = 8.5;
	               groceryPrices["back_beans"]   = 40;
	                groceryPrices["peauts"]  = 35;
	                groceryPrices["okra"]  = 30;
	                 groceryPrices["shallot"]  =25;
	                 groceryPrices["jalapeno"]  = 7.5;
	                  groceryPrices["ginger"]  = 10;
	                  groceryPrices["yam"]  = 50;
	   
	    string groceryITEM;//item being bought
    int amount;//amount paid by customer
    double totalCOST = 0.0;//cost of all items bought
	    cout <<"Please enter items you want to buy(type 'done' to finsh)" << endl;
	
	while(true) {
		cout <<"ITEM: ";
		cin >> groceryITEM;
		
	if (groceryITEM == "done")	{
		break;
	} 
	
	if (groceryPrices.find(groceryITEM) != groceryPrices.end()) {
		totalCOST += groceryPrices[groceryITEM];
	 } else {
	 	cout << "INVALID ITEM ENTERED!" <<endl;
	 	
	 }
	
	}
	 cout << "Total cost: $" <<totalCOST <<endl;
     
     cout <<"AMOUNT PAID BY CUSTOMER:$ " ;
     cin >> amount;
     
     cout << (amount - totalCOST) << endl;
     
	   
	return 0;
}