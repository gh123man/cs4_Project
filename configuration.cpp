
#include "configuration.h"

Configuration::Configuration(Configuration *c): parent(c) {
}


Configuration *Configuration::getParent() {

    return parent;

}
