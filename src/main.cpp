//  _________        .__                      _________       .__          __                          _______       ____ 
//  \_   ___ \_______|__| ____    ____   ____ \_   ___ \ __ __|  | _____ _/  |_  ___________  ___  _   \   _  \     /_   |
//  /    \  \/\_  __ \  |/    \  / ___\_/ __ \/    \  \/|  |  \  | \__  \\   __\/  _ \_  __ \ \  \/ / \   /_\  \     |   |
//  \     \____|  | \/  |   |  \/ /_/  >  ___/\     \___|  |  /  |__/ __ \|  | (  <_> )  | \/  \   /   \  \_/   \    |   |
//   \______  /|__|  |__|___|  /\___  / \___  >\______  /____/|____(____  /__|  \____/|__|      \_/     \_____  / /\ |___|
//          \/               \//_____/      \/        \/                \/                                    \/  \/      

#include "math.h"                                                                                                 

int main()
{
    while (true) {
        int mode = 0;
        std::cout << "Select Action!\n1 - Add\n2 - Minus\n3 - Multiply\n4 - Divide\n5 - Exit: ";
        std::cin >> mode;
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Select Action!\n1 - Add\n2 - Minus\n3 - Multiply\n4 - Divide\n5 - Exit: ";
            std::cin >> mode;
        }
        switch (mode)
        {
        case 1:
            int firstADD;
            int secondADD;
            std::cout << "You selected action 'Add'!\nEnter first number: ";
            std::cin >> firstADD;
            std::cout << "Enter second number: ";
            std::cin >> secondADD;
            std::cout << "Result: " << Maths::Add(firstADD, secondADD) << "\n\n";
            break;
        case 2:
            int firstMINUS;
            int secondMINUS;
            std::cout << "You selected action 'Minus'!\nEnter first number: ";
            std::cin >> firstMINUS;
            std::cout << "Enter second number: ";
            std::cin >> secondMINUS;
            std::cout << "Result: " << Maths::Minus(firstMINUS, secondMINUS) << "\n\n";
            break;
        case 3:
            int firstMULTIPLY;
            int secondMULTIPLY;
            std::cout << "You selected action 'Multiply'!\nEnter first number: ";
            std::cin >> firstMULTIPLY;
            std::cout << "Enter second number: ";
            std::cin >> secondMULTIPLY;
            std::cout << "Result: " << Maths::Multiply(firstMULTIPLY, secondMULTIPLY) << "\n\n";
            break;
        case 4:
            int firstDIVIDE;
            int secondDIVIDE;
            std::cout << "You selected action 'Divide'!\nEnter first number: ";
            std::cin >> firstDIVIDE;
            std::cout << "Enter second number: ";
            std::cin >> secondDIVIDE;
            std::cout << "Result: " << Maths::Divide(firstDIVIDE, secondDIVIDE) << "\n\n";
            break;
        case 5:
            std::cout << "You selected action 'Exit'!\n";
            return 0;
            break;
        default:
            break;
        }
    }
}
