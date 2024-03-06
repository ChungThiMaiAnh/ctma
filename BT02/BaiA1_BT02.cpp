///baiA1.cpp
a)
#include <bits/stdc++.h>

using namespace std;

int main() {
    int cnt = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(i%2 == 0) {
            cout << i << endl;
            cnt++;
        }
    }
    cout << "So lan lap la: " << cnt;
    return 0;
}

b)
#include <bits/stdc++.h>

using namespace std;

int main() {
       for(int i = 1; i <= 100; i++)
    {
        if(i%2 == 0) {
            cout << i << endl;
                    }
    }
        return 0;
}

c)
#include <iostream>
using namespace std;
int main() {
    int i = 2;
    do {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    } while (i <= 100);
}

d)
#include <iostream>

using namespace std;

int main() {
    int i = 2;
    do {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
        if (i > 100) {
            break;
        }
    } while (true);
}

e)
#include <iostream>

using namespace std;

int main() {
    int i = 1;
    do {
        i++;
        if (i % 2 != 0) {
            continue;
        }
        cout << i << endl;
    } while (i < 100);
}

