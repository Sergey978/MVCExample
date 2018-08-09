#ifndef MODEL_H
#define MODEL_H

#include<string>
#include "iobservable.h"
#include<vector>
#include "iobserverh.h"

class Model : public  IObservable
{
public:
    Model(const std::string &data);
    Model();
    std::string Data();
    void SetData(const std::string &data);
    std::vector<IObserver *> observers;

    // IObservable interface
    void addObserver(const IObserver &o) override;
    void removeObserver(const IObserver &o) override;
    void notifyObservers() override;

private:
    std::string data = "";



};

#endif // MODEL_H
