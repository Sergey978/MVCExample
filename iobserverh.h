#ifndef IOBSERVERH
#define IOBSERVERH

class IObserver
{
public:
    IObserver();
    virtual void handleEvent() = 0;
    virtual ~IObserver();
};

#endif // IOBSERVERH

