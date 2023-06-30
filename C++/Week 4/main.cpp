#include <iostream>

using namespace std;


int main()
{
    int n = 10, i=0;
    while (i <= 10) {
        cout << "This is post-increment" << i++ << endl;
        //Here i is shown as 0 and becomes 1 after the line runs.
        cout << "This is pre-increment" << ++i << endl;
        //Here i is increment before running. Since i was 1, it becomes incremented to 2 then shown as 2.

"This is the result" "
This is post-increment0
This is pre-increment2
This is post-increment2
This is pre-increment4
This is post-increment4
This is pre-increment6
This is post-increment6
This is pre-increment8
This is post-increment8
This is pre-increment10
This is post-increment10
This is pre-increment12"
    }
}
