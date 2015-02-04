#ifndef STOOGE
#define STOOGE


class Stooge
{
  public:
    // Factory Method
    static Stooge *make_stooge(int choice);
    virtual void slap_stick() = 0;
};


class Larry: public Stooge
{
    public:
    void slap_stick();
};

class Moe: public Stooge
{
    public:
    void slap_stick();
};

class Curly: public Stooge
{
    public:
    void slap_stick();
};

#endif // STOOGE

