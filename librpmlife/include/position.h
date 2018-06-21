#ifndef POSITION_H
#define POSITION_H


class position {
public:
    position(int pX=0, int pY=0, int pZ=0){x=pX;y=pY;z=pZ;}
    ~position();
    int X() {return x;}
    int Y() {return y;}
    int Z() {return z;}

private:
    int x,y,z;

};

#endif // POSITION_H
