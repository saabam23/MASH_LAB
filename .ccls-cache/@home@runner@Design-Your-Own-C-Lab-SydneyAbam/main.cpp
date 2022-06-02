#include <iostream>
#include <string>
#include <vector>
#include "life.h"
#include <unistd.h>

using namespace std;


// function that uses the user's input (countNum) to count through the vector; after each counting round, the element that the loop lands on will be removed from each vector until one element is left; this is for the string vectors
vector<string> DeleteElementStr(vector<string>v, int n, int c){
  
  string ex_space = "";
  v.push_back(ex_space);
  for (int i = n + 1; i < v.size() - 1; i++){
    v[i - 1] = v[i];
  }

  v.pop_back();
  v.pop_back();
  
  return v;

  while ((n != 1) && (v[0] != v[0] || v[0] != v[1] || v[0] != v[2] || v[0] != v[3])){
    cout << "Enter a number between 1-10: ";
    cin >> c;

    n = c % v.size();
    v.push_back(ex_space);

    string ex_space = "";
    v.push_back(ex_space);
    for (int i = n + 1; i < v.size() - 1; i++){
      v[i - 1] = v[i];
    }
    cout << endl;
  
    v.pop_back();
    v.pop_back();
  }
}

// function that uses the user's input (countNum) to count through the vector; after each counting round, the element that the loop lands on will be removed from each vector until one element is left; this is for the string vectors
vector<int> DeleteElementInt(vector<int>v, int n, int c){
  n = c % v.size();
  cout << endl;
  
  int ex_space = 0;
  v.push_back(ex_space);
  for (int i = n + 1; i < v.size() - 1; i++){
    v[i - 1] = v[i];
  }

  v.pop_back();
  v.pop_back();
  
  return v;

  while ((n != 1) && (v[0] != v[0] || v[0] != v[1] || v[0] != v[2] || v[0] != v[3])){
    cout << "Enter a number between 1-10: ";
    cin >> c;

    n = c % v.size();
    v.push_back(ex_space);

    int ex_space = 0;
    v.push_back(ex_space);
    for (int i = n + 1; i < v.size() - 1; i++){
      v[i - 1] = v[i];
    }
    cout << endl;
  
    v.pop_back();
    v.pop_back();
  }
}


int main() {
  // declare variables
  string city_of_residence, typePet, dreamJob, honey_moon;
  int sal, numKids, countNum, removeElement;
  Life mash_player;

  // declare six vectors (for each category) & for MASH
  vector<string>cityVec;
  vector<string>petVec;
  vector<string>jobVec;
  vector<string>honeymoonVec;
  vector<int>salaryVec;
  vector<int>kidsVec;
  vector<string>mashVec = {"Mansion", "Apartment", "Shack", "House"};

  // explains the game to the user 
  cout << "Welcome to the M.A.S.H Game where we give you your future!\nThere will be six categories and you will enter 4 answers for\neach one. Choose wisely. Enjoy!\n** Please be aware that in order to enter two words, you will\nhave to combine them into one **" << endl;
cout << "---------------------------------------------------------------" << endl;
  
  // prompts user to enter four different answer for each category question and then inserts those answers into the category's vector
  while (cityVec.size() != 4){
    cout << "What city do you want to live in when you grow up?: ";
  cin >> city_of_residence;
  cityVec.push_back(city_of_residence);
}
  cout << endl;

  while (petVec.size() != 4){
    cout << "What kind of pet do you want?: ";
    cin >> typePet;
    petVec.push_back(typePet);
  }
  cout << endl;

  while (jobVec.size() != 4){
    cout << "What are your dream jobs?: ";
    cin >> dreamJob;
    jobVec.push_back(dreamJob);
  }
  cout << endl;

  while (honeymoonVec.size() != 4){
    cout << "Where do you want to go for your honeymoon?: ";
    cin >> honey_moon;
    honeymoonVec.push_back(honey_moon);
  }
  cout << endl;

  while (salaryVec.size() != 4){
    cout << "What is your desired salary?: ";
    cin >> sal;
    salaryVec.push_back(sal);
  }
  cout << endl;

  while (kidsVec.size() != 4){
    cout << "How many kids do you want to have?: ";
    cin >> numKids;
    kidsVec.push_back(numKids);
  }
  cout << endl;

  // prompts user for a number 1-10 which will be the number of times that program counts through each category vector
  cout << "Enter a number between 1-10: ";
  cin >> countNum;
  
  // if the user does not enter enter a numebr between 1 - 10
  while (countNum < 1 || countNum > 10){
    cout << "This number is invalid. Please enter a different number." << endl;
    cout << "Enter a number between 1-10: ";
  cin >> countNum;
  }
  
  removeElement = countNum % mashVec.size();
  cout << endl;
  
  // function calls
  DeleteElementStr(cityVec, removeElement, countNum);
  DeleteElementStr(petVec, removeElement, countNum);
  DeleteElementStr(jobVec, removeElement, countNum);
  DeleteElementStr(honeymoonVec, removeElement, countNum);
  DeleteElementInt(salaryVec, removeElement, countNum);
  DeleteElementInt(kidsVec, removeElement, countNum); 
  DeleteElementStr(mashVec, removeElement, countNum);

  // The following code was added by Ms. Barry for grading purposes
  for (int i = 0; i< cityVec.size()-1;i++)
    cout << cityVec[i]<< " ";
  cout << endl;


  
 mash_player.set_honeymoon(honeymoonVec[removeElement]);
  mash_player.set_city(cityVec[removeElement]);
  mash_player.set_pet(petVec[removeElement]);
  mash_player.set_job(jobVec[removeElement]); 
  mash_player.set_salary(salaryVec[removeElement]);
  mash_player.set_num_kids(kidsVec[removeElement]);
  
  // prints results
  cout << "Welcome to Your Future..." << endl;
  cout << endl;

  // pauses for 2 seconds to show each result; gives a dramatic effect
  sleep(2);
  
  cout << "Where you will live...";
  sleep(2);
  cout << mash_player.get_city() << endl;;

  cout << "Where your honeymoon will be...";
  sleep(2);
  cout << mash_player.get_honeymoon() << endl;

  cout << "Your dream job...";
  sleep(2);
  cout << mash_player.get_job() << endl;

  cout << "Your future salary...";
  sleep(2);
  cout << mash_player.get_salary() << endl;

  cout << "The pet you will have...";
  sleep(2);
  cout << mash_player.get_pet() << endl;

  cout << "The number of you kids you will have...";
  sleep(2);
  cout << mash_player.get_num_kids() << endl;

  cout << "Lastly, the house you will live in...";
  sleep(2);
  cout << mashVec[removeElement] << endl;
  

}