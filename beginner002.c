#include <stdio.h>

#define p(x) printf(x)
#define loop(x) for(int i = 0;i < x;i++)

int main()
{
    p("#include <iostream>\n");
    p("using namespace std;\n\n");
    p("int main(){\n");
    loop(7){
        p("     cout << \"Hello World\" << endl;\n");
    }
    p("     return 0;\n}");
    return 0;
}
