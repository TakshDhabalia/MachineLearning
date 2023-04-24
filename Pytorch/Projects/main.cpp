#include <iostream>
using namespace std;
/*
this is the main section where we say what out main plan for the project is 
we are mainly focused in the sector where we need to select the main features from where we will go on to build the app

MAIN AIM:
to build a itenary sort of an app where people can see the places and decide a itenary from where they can plan a trip 

FEATURES:
PLACE DESCESION - based on your type --adventerous , religious , city , outskirts and other categories 
WITHIN PLACE : what to explore , hotels , restraunts and stuff
TRAVEL : money spent on travel and stuff we need to sort out based on that  
PRICE ,member selection , SELECTION AND RATINGS : we can sort thing like hotels to wisitn with a small amout of sorting 
DESCESION : do you want to go or nah 

HOW I FEEL WE SHOULD PROCEED 
user inputs :
    we need to get a basic sense of the person we are dealing with :
        budget 
        members 
        ages of eeeach 
        days to stay 
        and travel with 

*/
/*
this section will describe the events for the user input and guides me through the structure of user input 


*/
class customer {
char people;
int type_of_trip;
int budget;
int days_to_live;
public:
customer(){
    cout<<"welcome to Make My Trip better and today we will guide you through you r perfect dream trip making jouney ";
    
    cin>>people;
    cout<<"please enter what are you looking for in a trip \n 1.Adventure \n2.Religious  \n3.city exploration` \n";
    cout<<"please tell us your budget in rupees";
    cin>>budget;
    cout<<"please enter the number of people including you on the trip";





}




};



int main() {

customer();


};

