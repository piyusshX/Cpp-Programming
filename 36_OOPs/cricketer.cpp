#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    private:
        string name;
        int age;
        int matches;
        int avgRuns;
    public:
        // setter
        void setName(string name){
            this->name = name;
        }
        void setAge(int age){
            this->age = age;
        }
        void setMatches(int matches){
            this->matches = matches;
        }
        void setRuns(int runs){
            this->avgRuns = runs;
        }
        // getter
        void getName(){
            cout<<"Cricketer Name : "<<name<<endl;
        }
        void getAge(){
            cout<<"Age : "<<age<<" Years Old"<<endl;
        }
        void getMatches(){
            cout<<"Number of Matches Played : "<<matches<<endl;
        }
        void getRuns(){
            cout<<"Average Runs Scored : "<<avgRuns<<endl;
        }
};
int main(){
    Cricketer c1;
    Cricketer c2;
    Cricketer c3;
    Cricketer c4;
    Cricketer c5;
    
    c1.setName("MS Dhoni");
    c1.setAge(39);
    c1.setMatches(384);
    c1.setRuns(46);

    c2.setName("Rohit Sharma");
    c2.setAge(36);
    c2.setMatches(359);
    c2.setRuns(54);
    
    c3.setName("Virat Kohli");
    c3.setAge(32);
    c3.setMatches(234);
    c3.setRuns(69);
    
    c4.setName("KL Rahul");
    c4.setAge(32);
    c4.setMatches(197);
    c4.setRuns(52);
    
    c5.setName("Dinesh Karthik");
    c5.setAge(38);
    c5.setMatches(284);
    c5.setRuns(42);
    
    Cricketer team[5] = {c1,c2,c3,c4,c5};
    for(int i=0;i<5;i++){
        team[i].getName();
        team[i].getAge();
        team[i].getMatches();
        team[i].getRuns();
        cout<<endl;
    }
}