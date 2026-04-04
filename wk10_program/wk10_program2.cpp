#include "wk10_program2.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cstdlib> // for rand()
#include <ctime> // in order to not get the same questions every time I start the game
#include <algorithm> // for std::advance() 

void playGame() {
    std::map<std::string, std::string> stateCapitals = {
        {"Alabama", "Montgomery"},
        {"Alaska", "Juneau"},
        {"Arizona", "Phoenix"},
        {"Arkansas", "Little Rock"},
        {"California", "Sacramento"},
        {"Colorado", "Denver"},
        {"Connecticut", "Hartford"},
        {"Delaware", "Dover"},
        {"Florida", "Tallahassee"},
        {"Georgia", "Atlanta"},
        {"Hawaii", "Honolulu"},
        {"Idaho", "Boise"},
        {"Illinois", "Springfield"},
        {"Indiana", "Indianapolis"},
        {"Iowa", "Des Moines"},
        {"Kansas", "Topeka"},
        {"Kentucky", "Frankfort"},
        {"Louisiana", "Baton Rouge"},
        {"Maine", "Augusta"},
        {"Maryland", "Annapolis"},
        {"Massachusetts", "Boston"},
        {"Michigan", "Lansing"},
        {"Minnesota", "Saint Paul"},
        {"Mississippi", "Jackson"},
        {"Missouri", "Jefferson City"},
        {"Montana", "Helena"},
        {"Nebraska", "Lincoln"},
        {"Nevada", "Carson City"},
        {"New Hampshire", "Concord"},
        {"New Jersey", "Trenton"},
        {"New Mexico", "Santa Fe"},
        {"New York", "Albany"},
        {"North Carolina", "Raleigh"},
        {"North Dakota", "Bismarck"},
        {"Ohio", "Columbus"},
        {"Oklahoma", "Oklahoma City"},
        {"Oregon", "Salem"},
        {"Pennsylvania", "Harrisburg"},
        {"Rhode Island", "Providence"},
        {"South Carolina", "Columbia"},
        {"South Dakota", "Pierre"},
        {"Tennessee", "Nashville"},
        {"Texas", "Austin"},
        {"Utah", "Salt Lake City"},
        {"Vermont", "Montpelier"},
        {"Virginia", "Richmond"},
        {"Washington", "Olympia"},
        {"West Virginia", "Charleston"},
        {"Wisconsin", "Madison"},
        {"Wyoming", "Cheyenne"}
    };

    // what if you created a vector with numbers initially 0-49. Then you choose a random number within
    // the vector.size(). Then from that random number, you traverse the map x many times. Find whatever that
    // state is, check that states capital, then pop the number you just got from the vector. That way you'll
    // never traverse the array again and get a 3. That also means that you would need to resize the vector by -1


    // initalize the vector with nums 0 - 49
    std::vector<int> myVector(50);
    for (int i = 0; i < 50; i++) {
        myVector[i] = i;
    }

    int correctCount = 0;
    int incorrectCount = 0;
    std::string userAns;

    //so the game asks different states with each run
    srand(time(0));

    do {

        // handle edge case if you go through all 50 states
        if (myVector.size() < 1) { 
            std::cout << "You've gone through all 50 states!";
            break;
         }

        //this was to get the location of the vector so we could erase this value later
        int randomNum = rand() % myVector.size();

        //get the state index stored at the vector value
        int vectorNum = myVector.at(randomNum);
    
        //traverse the map
        auto it = stateCapitals.begin();
        std::advance(it, vectorNum);
        std::string state = it->first;
        std::string capital = it->second;


        std::cout << "What is the capital of " << state << "? ";
        getline(std::cin, userAns);
        
        //if quit just break
        if (userAns == "quit") { break; }

        //check if the answer is correct or incorrect
        if (userAns == capital) {
            std::cout << "Correct!" << std::endl;
            correctCount++;
            std::cout << std::endl;
        } else{
            std::cout << "Incorrect. The correct answer is " << capital << "." << std::endl;
            incorrectCount++;
            std::cout << std::endl;
        }

        myVector.erase(myVector.begin() + randomNum);

    } while (!(userAns == "quit"));

    std::cout << std::endl;

    std::cout << "Quiz complete!" << std::endl;
    std::cout << "Correct answers: " << correctCount << std::endl;
    std::cout << "Incorrect answers: " << incorrectCount << std::endl;
}

int main(){ 
    std::cout << "U.S. State Capitals Quiz!" << std::endl;
    std::cout << "Type 'quit' at any time to stop." << std:: endl;
    std::cout << std::endl;

    playGame();
}