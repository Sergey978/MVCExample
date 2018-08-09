#include<string>
#include<algorithm>
#include "model.h"

Model::Model()
{

}


Model::Model(const std::string &data) {
    this->SetData(data);
}

std::string Model::Data(){
    return this->data;
}

void Model::SetData(const std::string &data) {

}

void Model::addObserver(const IObserver &o)
{
    observers.push_back(o);
}

void Model::removeObserver(const IObserver &o)
{
    // Remove elements with a value of o
       std::vector <IObserver *>::iteratornew_end = remove ( observers.begin( ), observers.end( ), o );



       // To change the sequence size, use erase
       observers.erase (new_end, observers.end( ) );
}

void Model::notifyObservers()
{

}

