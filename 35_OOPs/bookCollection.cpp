#include<iostream>
#include<string>
using namespace std;
class book{
private:
        string name;
        int price;
        int page;
        string genre;
public: // member Functions
          // Setter
        void setName(string n){
            name = n;
        }
        void setPrice(int p){
            price = p;
        }
        void setPage(int pages){
            page = pages;
        }
        void setGenre(string gen){
            this->genre = gen;
        }
          // main functions
        void countBook(int pric){
            if(pric>price) cout<<"yes its in your bugget"<<endl;
            else cout<<"Sorry its out of your bugget"<<endl;
        }
        bool isPresent(string naam){
            if(naam==name) return true;
            else false;
        }
        void printDetails(){
            cout<<"Book Name : "<<name<<endl;
            cout<<"Genre : "<<genre<<endl;
            cout<<"Number Of Pages : "<<page<<endl;
            cout<<"Price Of Book : "<<price<<endl;
        }
          // Getter
        void getName(){
            cout<<name<<endl;
        }
        void getPrice(){
            cout<<price<<endl;
        }
        void getPage(){
            cout<<page<<endl;
        }
        void getGenre(){
            cout<<genre<<endl;
        }
};
int main(){
    book WorldEnd; 
    WorldEnd.setName("WorldEnd: What Do You Do at the End of the World? Are You Busy? Will You Save Us?");
    WorldEnd.setGenre("Fantasy, Magic, Romance, Timetravel");
    WorldEnd.setPrice(1199);
    WorldEnd.setPage(290);
    WorldEnd.printDetails();
}