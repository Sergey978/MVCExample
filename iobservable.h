#ifndef IOBSERVABLE
#define IOBSERVABLE

class IObserver;

class IObservable
{
public:
    virtual void addObserver(const IObserver &o) = 0;
    virtual void removeObserver(const IObserver &o) = 0;
    virtual void notifyObservers() = 0;
    virtual ~IObservable();

};


#endif // IOBSERVABLE

