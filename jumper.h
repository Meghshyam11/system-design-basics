#ifndef Jumper_h
#define Jumper_h

class Jumper{
    public:
    int start;
    int end;

    // Constructor for jump points
    Jumper(int start, int end){
        this->start=start;
        this->end=end;
    }
};

#endif
