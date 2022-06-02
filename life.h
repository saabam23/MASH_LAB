#include <iostream>
#include <string>

using namespace std;

// class definition
class Life{
  public:
    Life(); // constructor
    // member functions
    void set_num_kids(int num_kids);
    void set_job(string job);
    void set_city(string city);
    void set_pet(string pet);
    void set_salary(int salary);
    void set_honeymoon(string honeymoon);
    int get_num_kids();
    string get_job();
    string get_city();
    string get_pet();
    int get_salary();
    string get_honeymoon();

  // data members
  private:
    int num_kids;
    string job;
    string city;
    string pet;
    int salary;
    string honeymoon;
};