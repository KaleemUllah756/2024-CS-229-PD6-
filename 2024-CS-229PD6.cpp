//Task 1
#include <iostream>
using namespace std;
string decideActivity(string temperature, string humidity);
int main(){
string temperature,humidity;
cout<<"Enter the temperature :"<<endl;
cin>>temperature;
cout<<"Enter the humidity :"<<endl;
cin>>humidity;
cout<< decideActivity(temperature,humidity);
}
string decideActivity(string temperature,string humidity){
if(temperature=="warm" && humidity=="dry"){
    return "Play Tennis";
}
if(temperature=="warm" && humidity=="humid"){
    return "Swim";
}
if(temperature=="cold" && humidity=="dry"){
    return "Play Basketball";
}
if(temperature=="cold" && humidity=="humid"){
    return "Watch TV";
}
}

//Task 2
#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
 main(){
    float marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology;
string name,result,grade;
float average;
cout<<"Enter the student name :"<<endl;
cin>>name;
cout<<"Enter the marks of English :"<<endl;
cin>>marksEnglish;
cout<<"Enter the marks of Maths :"<<endl;
cin>>marksMaths;
cout<<"Enter the marks of Chemistry :"<<endl;
cin>>marksChemistry;
cout<<"Enter the marks of Social Science :"<<endl;
cin>>marksSocialScience;
cout<<"Enter the marks of Biology :"<<endl;
cin>>marksBiology;
average= calculateAverage(marksEnglish,marksMaths, marksChemistry,marksSocialScience, marksBiology);
cout<<"Percentage is :"<<average;
grade=calculateGrade(average);
cout<<"Grade is :"<<grade;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology){
float average,total_marks;
total_marks=marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology;
average=(total_marks/500)*100;
return average;
}
string calculateGrade(float average){
    string grade;
if(average >=90 && average <=100){
    return "A+";
}else if(average >=80){
    return "A";
}else if(average >=70){
    return "B+";
}else if(average >=60){
    return "B";
}else if(average >=50){
    return "C";
}else if(average >=40){
    return "D";
}else if(average >=0){
    return "F";
}

}

//Task 3
#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
int main(){
int day;
string month,zodiacsign;
cout<<"Enter the day of birth :"<<endl;
cin>>day;
cout<<"Enter the month of birth :"<<endl;
cin>>month;
zodiacsign=findZodiacSign(day,month);
cout<<"Zodiac Sign :"<<zodiacsign;
}
string findZodiacSign(int day, string month){
if((month=="january" && day >=20) || (month=="february" && day <=18)){
return "Aquarius";
}else if((month=="february" && day >=19) || (month=="march" && day <=20)){
    return "Pisces";
}else if((month=="march" && day >=21) || (month=="april"&& day <=19)){
    return "Aries";
}else if((month=="april"&& day >= 20) || (month=="may" && day <= 20)){
    return "Taurus";
}else if((month=="may" && day >= 21) || (month=="june" && day <=20)){
    return "Gemini";
}else if((month=="june" && day >=21 ) || (month=="july" && day <= 22)){
    return "Cancer";
}else if ((month=="july" && day >=23) || (month=="august" && day <=22)){
    return "Leo";
}else if ((month=="august" && day >=23) || (month=="september" && day <=22)){
    return "Virgo";
}else if ((month=="september" && day >=23) || (month=="october" && day <=22)){
    return "Libra";
}else if((month=="october" && day >= 23) || (month=="november" && day <=21)){
    return "Scorpio";
}else if((month=="november" && day >=22) || (month=="december" && day <=21)){
    return "Sagittarius";
}else if((month=="december" && day >=22) || (month=="january" && day <=19)){
    return "Capricorn";
}

}

//Task 4
#include <iostream>
using namespace std;

int main(){
    int minutes, day_minutes= 0, night_minutes= 0;
    float total_bill = 0.0;
char servicecode;
cout<<"Enter the service code(r/R for regular , p/P for premium): ";
cin>>servicecode;

if(servicecode=='r' || servicecode=='R'){
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    total_bill= 10;
    if (minutes > 50){
        total_bill=total_bill +(minutes-50)*0.20;
    }
    cout<<"Service type: Regular "<<endl;
    cout<<"Minutes used: "<<minutes<<endl;
    cout<<"Total amount Due : $"<<total_bill<<endl;

}else if(servicecode=='p' || servicecode=='P'){
cout<<"Number of minutes used during the day: ";
cin>>day_minutes;
cout<<"Number of minutes used during night: ";
cin>>night_minutes;

total_bill=25;
if(day_minutes > 75){
    total_bill=total_bill +(day_minutes-75)*0.10;

}
if(night_minutes > 100){
    total_bill=total_bill+(night_minutes-100)*0.05;
}
cout<<"Service type: Premium"<<endl;
cout<<"Day minutes used: "<<day_minutes<<endl;
cout<<"Night minutes used: "<<night_minutes<<endl;
cout<<"Total Amount Due: $"<<total_bill<<endl;
}

}

//Task 5
#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
int main(){
string fruit,dayOfWeek;
double quantity,price;
cout<<"Enter the fruit name: "<<endl;
cin>>fruit;
cout<<"Enter the day of week: "<<endl;
cin>>dayOfWeek;
cout<<"Enter the quantity: "<<endl;
cin>>quantity;
price=calculateFruitPrice(fruit,dayOfWeek,quantity);
cout<<"Price :"<<price;
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity){
double price;
if(dayOfWeek=="monday" || dayOfWeek=="tuesday" || dayOfWeek=="wednesday" || dayOfWeek=="thursday" || dayOfWeek=="friday"){
    if(fruit=="banana"){
        price=quantity*2.50;
    }if(fruit=="apple"){
        price=quantity*1.20;
    }if(fruit=="orange"){
        price=quantity*0.85;
    }if(fruit=="grapefruit"){
        price=quantity*1.45;
    }if(fruit=="kiwi"){
        price=quantity*2.70;
    }if(fruit=="pineapple"){
        price=quantity*5.50;
    }if(fruit=="grapes"){
        price=quantity*3.85;
    }
    return price;
}if(dayOfWeek=="saturday" || dayOfWeek=="sunday"){
    if(fruit=="banana"){
        price=quantity*2.70;
    }if(fruit=="apple"){
        price=quantity*1.25;
    }if(fruit=="orange"){
        price=quantity*0.90;
    }if(fruit=="grapefruit"){
        price=quantity*1.60;
    }if(fruit=="kiwi"){
        price=quantity*3.00;
    }if(fruit=="pineapple"){
        price=quantity*5.60;
    }if(fruit=="grapes"){
        price=quantity*4.20;
    }
    return price;
}else{
    cout<<"Error"<<endl;
}

}
//Task 6
#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
int main(){
string month,prices;
int numberOfStays;
cout<<"Enter the month (May,june,July,August,September,October): "<<endl;
cin>>month;
cout<<"Enter the number of stays: "<<endl;
cin>>numberOfStays;
prices=calculateHotelPrices(month,numberOfStays);
cout<<prices;
}
string calculateHotelPrices(string month, int numberOfStays){
    float apartment,studio;
if(month=="may"|| month=="october" && numberOfStays>=15){
apartment=(65-6.5)*numberOfStays;
studio=(50-15)*numberOfStays;
cout<<"Studio:$ "<<studio<<endl;
cout<<"Apartment:$ "<<apartment<<endl;
}else if(month=="may" || month=="october" && numberOfStays>=7){
    apartment=65*numberOfStays;
    studio=(50-2.5)*numberOfStays;
cout<<"Studio:$ "<<studio<<endl;
cout<<"Apartment:$ "<<apartment<<endl;
}
 if(month=="june" || month=="september" && numberOfStays>=15){
apartment=(68.70-6.87)*numberOfStays;
studio=(75.20-15.04)*numberOfStays;
cout<<"Studio:$ "<<studio<<endl;
cout<<"Apartment:$ "<<apartment<<endl;
}if(month=="june" || month=="september" && numberOfStays<=14){
    apartment=68.70*numberOfStays;
    studio=75.20*numberOfStays;
    cout<<"Studio:$ "<<studio<<endl;
    cout<<"Apartment:$ "<<apartment<<endl;
}if(month=="july" || month=="august" && numberOfStays>=15){
    apartment=(76-7.6)*numberOfStays;
    studio=77*numberOfStays;
    cout<<"Studio:$ "<<studio<<endl;
    cout<<"Apartment:$ "<<apartment<<endl;
}if(month=="july" || month=="august" && numberOfStays<=14){
    apartment=76*numberOfStays;
    studio=77*numberOfStays;
    cout<<"Studio:$ "<<studio<<endl;
    cout<<"Apartment:$ "<<apartment<<endl;
}
}
//Task 7
#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
int main(){
    string time;
int examHour,examMinute,studentHour,studentMinute;
cout<<"Enter the starting time (Hour): ";
cin>>examHour;
cout<<"Enter the starting time (minutes): ";
cin>>examMinute;
cout<<"Enter student Hour of arrival: ";
cin>>studentHour;
cout<<"Enter the student minutes arrival: ";
cin>>studentMinute;
time=checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
cout<<time;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute){
int examtimeinminutes,studenttimeinminutes,late,early;
examtimeinminutes=examHour*60 +examMinute;
studenttimeinminutes= studentHour*60+studentMinute;
if(studenttimeinminutes > examtimeinminutes ){
late=studenttimeinminutes - examtimeinminutes;
cout<<"Late"<<endl;
cout<< late/60<<" hour " << late%60<<" minutes "<<endl;
}else if(studenttimeinminutes>= examtimeinminutes - 30){
    cout<<"On Time"<<endl;
}else{
early=examtimeinminutes-studenttimeinminutes;
cout<<"Early"<<endl;
cout<<early/60<<" hour "<<early%60<<" minute "<<endl;

}

}
//Task 8
#include <iostream>
#include <cmath>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
int main(){
string yearType;
int holidays,hometownWeekends,totaldays;
cout<<"Enter the year type :"<<endl;
cin>>yearType;
cout<<"Enter the number of holidays :"<<endl;
cin>>holidays;
cout<<"Enter the number of weekends :"<<endl;
cin>>hometownWeekends;
totaldays=calculateVolleyballGames(yearType,holidays,hometownWeekends);
cout<<totaldays;

}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends){
const int totalweekends=48;
const double holidayfraction=2.0/3.0;
const double weekendfraction=3.0/4.0;
int weekendsinsofia,volleyballweekends,volleyballholidays,total;

weekendsinsofia=totalweekends-hometownWeekends;
volleyballweekends=weekendsinsofia *(1-weekendfraction);
volleyballholidays=static_cast<int>(holidays*holidayfraction);
total=volleyballweekends+volleyballholidays;
if(yearType=="leap"){
    total=static_cast<int>(total*1.15);
}else if (yearType=="normal"){
    total=total*1;
}



}
