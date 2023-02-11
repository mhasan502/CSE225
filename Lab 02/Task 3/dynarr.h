#ifndef DYNARR_H
#define DYNARR_H

class dynarr {
    private:
        int **data;
        int row, col;

    public:
        dynarr();
        dynarr(int, int);
        ~dynarr();
        void setValue(int, int, int);
        int getValue(int, int);
        void allocate(int, int);
};

#endif // DYNARR_H_INCLUDED
