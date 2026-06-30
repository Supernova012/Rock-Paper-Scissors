#include <iostream>
#include <random>

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
    int A = choose();
    int B = randchoose();
    std::cout << "You chose: " << A << ", ";
    std::cout <<"I chose: " << B << "\n";
    
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
