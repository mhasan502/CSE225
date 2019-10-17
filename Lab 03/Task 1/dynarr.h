#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T> class dynArr{
    private:
        T *data;
        int size;
    public:
        dynArr(int);
        ~dynArr();
        void setValue(int, T);
        T getValue(int);
};
#endif // DYNARR_H_INCLUDED
