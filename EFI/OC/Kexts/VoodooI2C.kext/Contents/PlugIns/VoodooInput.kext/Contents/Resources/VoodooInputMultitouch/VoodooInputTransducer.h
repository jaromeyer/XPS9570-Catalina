//
//  VoodooInputTransducer.hpp
//  VooodooInput
//
//  Copyright © 2019 Kishor Prins. All rights reserved.
//

#ifndef VOODOO_INPUT_TRANSDUCER_H
#define VOODOO_INPUT_TRANSDUCER_H

#define VOODOO_INPUT_MAX_TRANSDUCERS 10

enum VoodooInputTransducerType {
    STYLUS,
    FINGER
};

struct TouchCoordinates {
    UInt32 x;
    UInt32 y;
    UInt8 pressure;
    UInt8 width;
};

struct VoodooInputTransducer {
    AbsoluteTime timestamp;
    
    UInt32 id;
    UInt32 secondaryId;
    VoodooInputTransducerType type;
    
    bool isValid;
    bool isPhysicalButtonDown;
    bool isTransducerActive;
    bool supportsPressure;
    
    TouchCoordinates currentCoordinates;
    TouchCoordinates previousCoordinates;
    
    UInt32 maxPressure;
};


#endif
