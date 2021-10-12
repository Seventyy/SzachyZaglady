#include "Input.h"

Vector Input::fetchInput() // próba do skutku uzyskania w³aœciwego inputu
{
    Vector try_input;
    while (true)
    {
        try_input = tryInput();
        if (!!try_input)
        {
            return try_input;
        }
    }
}
Vector Input::tryInput() // uzystanie vektora pozycji poionka z inputu
{
    std::string input;
    Vector input_vector;
    std::cin >> input;
    if ((input.size() == 2) &&
        ((input[0] >= 65 && input[0] <= 72) ||
            (input[0] >= 97 && input[0] <= 104)) &&
        (input[1] >= 49 && input[1] <= 56))
    {
        input_vector.x = (input[0] < 80) ? input[0] - 65 : input[0] - 97;
        input_vector.y = input[1] - 49;
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
    return input_vector;
}
