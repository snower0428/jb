//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocationManager;

__attribute__((visibility("hidden")))
@interface TBGlobalLocationManager : NSObject
{
    CLLocationManager *_locManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLLocationManager *locManager; // @synthesize locManager=_locManager;
- (void).cxx_destruct;

@end

