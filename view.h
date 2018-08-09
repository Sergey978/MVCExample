#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include "model.h"
// View is responsible to present data to users
class View {
public:
    View(const Model &model);
    View();
    void SetModel(const Model &model);
    void Render();
private:
    Model model;
};

#endif // VIEW_H
