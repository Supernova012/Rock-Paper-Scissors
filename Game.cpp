#include <iostream>
#include <random>
#include <string> 

int randchoose(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 3);

    int r = dist(gen);
    return r;
}

int choose() {
    int x{};
    
    std::cout << "Type 1 for rock, 2 for paper and 3 for scissors:  ";
    std::cin >> x;

    return x;
}

int main () {
    std::string option[3] = {"Rock", "Paper", "Scissor"};
    int A = choose();
    int B = randchoose();
    
    std::string Tu = option[A-1];
    std::string Ego = option[B-1];
    
    std::cout << "You chose: " << Tu<< ", ";
    std::cout <<"I chose: " << Ego << "\n";
    
    if ( A == B ) {
        std::cout << "Game tied!";
    }
    else if ( A == B+1 ) {
        std::cout << "You won!";
    }
    else if ( A == B-1 ) {
        std::cout << "You lost!";
    }
    else if (A == B+2 ) {
        std::cout << "You lost!";
    }
    else if (A == B-2 ) {
        std::cout << "You won!";
    }
    else {
        std::cout << "Wrong input! Please type 1 for rock, 2 for paper and 3 for scissor only!";
    }
    return 0;
}
