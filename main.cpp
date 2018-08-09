#include <iostream>
#include "view.h"
#include "model.h"
#include "controller.h"



int main()
{
    Model model("Model");
    View view(model);


    // binds model and view.
    Controller controller(model, view);
    // when application starts or button is clicked or form is shown...
    controller.OnLoad();
    model.SetData("Changes"); // this should trigger View to render
    model.SetData("Changes2"); // this should trigger View to render
}

