//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdGameCenterOperation.h"

@class NdGCUserInfo;

@interface NdGetUserInfoOperation : NdGameCenterOperation
{
    NdGCUserInfo *userInfo;
}

- (id)init;
- (int)operation;
- (id)callbackInvocationOnObject:(id)arg1;
- (void)generateResponse:(id)arg1;
@property(retain, nonatomic) NdGCUserInfo *userInfo; // @synthesize userInfo;

@end

