//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NdUserInfo;

@interface NdCPServerOperationModifyUserInfo : NdCPServerOperation
{
    NdUserInfo *userInfo;
}

@property(retain, nonatomic) NdUserInfo *userInfo; // @synthesize userInfo;
- (int)operation;
- (void)dealloc;
- (id)init;

@end

