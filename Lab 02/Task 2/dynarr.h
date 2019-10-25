#ifndef DYNARR_H
#define DYNARR_H

class dynarr{
    public:
        dynarr();
        dynarr(int);
        ~dynarr();
        void setValue(int, int);
        int getValue(int);
        void allocate(int);
    private:
        int *data;
        int size;
};
#endif // DYNARR_H
