#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
    Point(int _x, int _y){
        x = _x;
        y = _y;
    }
};
struct Rect{
    int x, y, w, h;
    Rect(int _x, int _y, int _w, int _h){
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }
    bool contains(const Point &p){
        if((p.x >= x && p.x <= x+w) && (p.y >= y && p.y <= y+h)){
            return true;
        }
        return false;
    }

};

int main(){
    int x, y;
    cin >> x >> y;
    Point a(x, y);
    int x1, y1, w, h;
    cin >> x1 >> y1 >> w >> h;
    Rect r(x1, y1, w, h);
    r.contains(a);
    return 0;
}
