//___FILEHEADER___

#ifndef ___PACKAGENAME____h
#define ___PACKAGENAME____h

// IOKit Libs Header
#include <IOKit/IOLib.h>
#include <IOKit/IOService.h>

/*! @class ___PACKAGENAME___
    @abstract Add your own class abstract here.
    @discussion Add your own class discussion here. */

class ___PACKAGENAME___ : public IOService {
    OSDeclareDefaultStructors(___PACKAGENAME___)

public:
    /* IOKit Based Functions */
#pragma mark IOKit Based Functions

/*! @function start
    @abstract During ___PACKAGENAME___ object's instantiation, starts the ___PACKAGENAME___ object that has been selected to run on the provider.
    @discussion Add your own discussion here.
    @result <code>true</code> if the start was successful; <code>false</code> otherwise (which will cause the instance to be detached and usually freed). */

    virtual bool start(IOService* provider) APPLE_KEXT_OVERRIDE;

/*! @function stop
    @abstract During ___PACKAGENAME___ termination, the stop method is called in its clients before they are detached & it is destroyed.
    @discussion Add your own discussion here. */

    virtual void stop(IOService* provider) APPLE_KEXT_OVERRIDE;
 
    /* ___PACKAGENAME___ Functions */
#pragma mark ___PACKAGENAME___ Functions
    /* Define your own functions here. It's strongly recommanded that you classify your own functions by using #pragma mark */
    
};

#endif /* ___PACKAGENAME____h */
