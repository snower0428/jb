//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBIExecutorPlugin.h"

@interface LoginPlugin : NSObject <TBIExecutorPlugin>
{
    int autologinStatus;
}

- (id)postProcess:(id)arg1 context:(id)arg2 api:(id)arg3;
- (id)init;

@end

