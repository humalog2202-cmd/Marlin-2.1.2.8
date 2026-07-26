#pragma once

namespace TarantulaOS {

class Module {

  public:

    virtual ~Module() = default;

    virtual const char* name() const = 0;
    virtual void init() = 0;

};

}