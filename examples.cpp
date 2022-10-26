#include "m2co.h"

class ColorClass
{
    public:
    ColorClass(int r, int g, int b): r{r}, g{g}, b{b}{}
        int r;
        int g;
        int b;
};

struct ColorStruct
{
    int r;
    int g;
    int b;
};


int main(int argc, char** argv)
{
                                                           // R   G   B
    ColorPrint("The quick brown fox jumps over the lazy dog\n", 0, 255, 0);                 // Easiest way
    ColorPrint("The quick brown fox jumps over the lazy dog\n", "#FFA014");                 // Hexadecimal
    GradientPrint("The quick brown fox jumps over the lazy dog\n", 255, 0, 0, 0, 0, 255);   // Gradient
    GradientPrint("The quick brown fox jumps over the lazy dog\n", "#0000FF", "#00FF00");   // Gradient hexadecimal


    ColorClass  color1{12, 48, 56};
    ColorStruct color2{132, 248, 156};

    // You can set the color in 3 different ways RGB, HEXADECIMAL and any class it has r, g and b variables
    setColor(59, 21, 13);
    printf("The quick brown fox jumps over the lazy dog\n");
    endColor(); // Not required

    setColor("#30E8BF");
    printf("The quick brown fox jumps over the lazy dog\n");
    endColor(); // Not required

    setColor(color1);
    printf("The quick brown fox jumps over the lazy dog\n");
    endColor(); // Not required

    setColor(color2);
    printf("The quick brown fox jumps over the lazy dog\n");
    endColor(); // Not required

    // Works with gradient                                         class   struct
    GradientPrint("The quick brown fox jumps over the lazy dog\n", color1, color2);

    return 0;
}
