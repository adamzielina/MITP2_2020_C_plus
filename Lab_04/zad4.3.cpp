#include <iostream>
using namespace std;

class student
{
private:
    string imie_nazwisko_ = "NO_NAME";
    unsigned int nr_indeksu_ = 0;
public:
    student(string imie_nazwisko, unsigned int nr_indeksu);
    string Opis_ = "student grupy";
    void printOpis();	
    void printDane()
    {
        cout << " Metoda printDane klasy bazowej" << endl;
	cout << " imie nazwisko " << imie_nazwisko_ << endl;
	cout << " nr indeksu " << nr_indeksu_  << endl;
    }
};

class starosta : public student 
{
public:
    void printDane()
    {
  	student::printDane();
        cout << " E-mail "<< email_ <<endl;
    }
    string email_ = "no@noemail";
    starosta(string imie_nazwisko, unsigned int nr_indeksu, string email);
    string Opis_ = "starosta grupy";
};

starosta::starosta(string imie_nazwisko, unsigned int nr_indeksu, string email) : 
  student(imie_nazwisko,  nr_indeksu) 
{
    email_=email;
    cout << "Tworzenie obiektu klasy starosta o nazwie: " << Opis_ << endl;
}

student::student(string imie_nazwisko, unsigned int nr_indeksu) :
  imie_nazwisko_(imie_nazwisko) 
{
    nr_indeksu_ = nr_indeksu;
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

int main()
{
    student stud("Jan Kowalski",7);
    stud.printOpis();
    stud.printDane();
    starosta star("Aleksandra Nowak",999,"mail@nomail.dot");
    star.printOpis();	
    star.printDane();
}
