#include <ctime>
enum Color { 
    white = 0,
    red = 1, 
    orange = 2,
    yellow = 3,
    green = 4, 
    blue = 5,
    purple = 6, 
    pink = 7,
    black = 8 
};

enum Type{
    top = 0, 
    bottom = 1, 
    dress = 2
};

class cloth{
    Color color; 
    Type type;
    int temperature_low;
    int temperature_high;
    time_t last_wear_date; 
};