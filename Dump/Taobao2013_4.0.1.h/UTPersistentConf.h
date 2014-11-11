//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UTKeychainItemWrapper, UTPersistentFile;

@interface UTPersistentConf : NSObject
{
    UTKeychainItemWrapper *mKeyChainWrapper;
    UTPersistentFile *mPersistentFile;
    NSMutableDictionary *mDict;
    NSString *mIdentifier;
    _Bool mIsModified;
    _Bool mAlwaysSyncWhenCommit;
}

+ (id)initWithIdentifier:(id)arg1;
@property _Bool mAlwaysSyncWhenCommit; // @synthesize mAlwaysSyncWhenCommit;
- (void).cxx_destruct;
- (void)commit;
- (void)clear;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)syncData;
- (void)syncToPF:(id)arg1;
- (void)syncToKC:(id)arg1;
- (void)create:(id)arg1;
- (void)initData;

@end

