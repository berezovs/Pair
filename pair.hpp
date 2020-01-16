#ifndef PAIR_H
#define PAIR_H


class Pair{
  private:
    int first, second;
  public:
  Pair();
    Pair(int first, int second);
    void setFirst(int newFirst);
    int getFirst();
    void setSecond(int newSecond);
    int getSecond();
};


#endif