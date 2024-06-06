#include <iostream>
#include <ctime>

int main(){
  int guess;
  int num;
  int tries;
    
    srand(time_t(NULL));
    num = rand() % 100 +1;

    do{
      std::cout << "Enter the number between 1-100: ";
      std::cin >> guess;
        if (guess > num) {
          std::cout << "Too high!" << '\n';
          tries++;
        }
        else if (guess < num) {
          std::cout << "Too low!" << '\n';
          tries++;
        }
        else {
          std::cout << "CORECT!";
          std::cout << "The number of tries: " << tries;
        }
    }while (guess != num);
}