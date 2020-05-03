//
//  INTaskStatus.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#ifndef INTaskStatus_h
#define INTaskStatus_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INTaskStatus) {
    INTaskStatusUnknown = 0,
    INTaskStatusNotCompleted,
    INTaskStatusCompleted,
} API_AVAILABLE(ios(11.0), watchos(4.0)) API_UNAVAILABLE(macosx);

#endif // INTaskStatus_h
