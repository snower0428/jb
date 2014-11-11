//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString;

@interface MTRiskControlManager : NSObject
{
    NSMutableDictionary *_dictionary;
    NSString *_inProcessingKey;
    NSDate *_lastRecoveryDate;
}

+ (id)sharedRiskControlManager;
@property(retain, nonatomic) NSDate *lastRecoveryDate; // @synthesize lastRecoveryDate=_lastRecoveryDate;
- (void).cxx_destruct;
- (void)enumerateKeysAndRecoveriesWithBlock:(CDUnknownBlockType)arg1;
- (id)inProcessingKey;
- (void)clearInProcessing;
- (BOOL)testAndSetInProcessingForKey:(id)arg1;
- (id)recoveryForKey:(id)arg1;
- (void)mergeRecoveryForKey:(id)arg1 toKey:(id)arg2;
- (void)unregisterRecoveryForKey:(id)arg1;
- (void)registerRecovery:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)init;

@end

