//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface TAVwCtrlUapLoginInternal : NSObject
{
    id delegate;
    int appid;
    int eType;
    NSMutableString *userName;
    long long uapUid;
    NSMutableString *userTicket;
    NSMutableString *userBlowfish;
}

- (void)dealloc;
- (id)init;

@end

