#include "view.h"

View::View()
{

}


View::View(const Model &model) {
    this->model = model;
}

void View::SetModel(const Model &model) {
    this->model = model;
}

void View::Render() {
    std::cout << "Model Data = " << model.Data() << endl;
}
