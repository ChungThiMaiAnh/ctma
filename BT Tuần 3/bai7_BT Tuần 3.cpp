struct Ship{
    int x, y;
    string id;
    int dx, dy;

    Ship(int x, int y, int dx, int dy, string id) : x(x), y(y), dx(dx), dy(dy), id(id) {}
    void move(){
        x += dx;
        y += dy;
    }

};
    void display(const Ship &ship){
        cout << ship.id << ", " << "(" << ship.x << ", " << ship.y << ")";
    }

int main(){
    int a1, b1, c1, d1, a2, b2, c2, d2;
    string id1, id2;
    cin >> id1 >> id2;
    cin >> a1 >> b1 >> c1 >> d1;
    cin >> a2 >> b2 >> c2 >> d2;
    Ship ship1(a1, b1, c1, d1, id1);
    Ship ship2(a2, b2, c2, d2, id1);
    int loop = 0;
        while (loop < 10) {
            ship1.move(); ship2.move();
            display(ship1); display(ship2);
            loop ++;
        }
}
