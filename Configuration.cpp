
#include "Configuration.h"

Configuration::Configuration(Configuration *c): parent(c) {
}


Configuration *Configuration::getParent() {

    return parent;

}
