//___FILEHEADER___

#include "___PACKAGENAME___.h"

#define super IOService

OSDefineMetaClassAndStructors(___PACKAGENAME___, super)

bool ___PACKAGENAME___::start(IOService* provider) {
    IOLog("%s::starting...\n", getName());

    if (!super::start(provider)) {
        IOLog("%s::super start failed!\n", getName());
        return false;
    }

    // Implement your start code here.

    return true;
}

void ___PACKAGENAME___::stop(IOService* provider) {
    IOLog("%s::stopping...\n", getName());

    // Implement your stop code here.

    super::stop(provider);
}
