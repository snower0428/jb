//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyBizDB : NSObject
{
}

+ (id)sharedInstance;
- (void)modifyContactNickname:(id)arg1 newName:(id)arg2 andFlag:(unsigned int)arg3;
- (void)delBuddys:(id)arg1 andFlag:(unsigned int)arg2;
- (void)addBuddy:(id)arg1 andName:(id)arg2 andMd5Phone:(id)arg3 andFlag:(unsigned int)arg4;
- (id)resetWangWangContactList:(unsigned int)arg1 forList:(id)arg2;
- (id)resetBuddyList:(unsigned int)arg1 forList:(id)arg2;
- (void)loadSyncWangWangFlag:(unsigned int *)arg1 forFlag:(unsigned int *)arg2;
- (void)loadSyncFlag:(unsigned int *)arg1 forFlag:(unsigned int *)arg2;
- (id)init;

@end
