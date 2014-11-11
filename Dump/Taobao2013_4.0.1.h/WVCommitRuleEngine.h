//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WVRequest;

@interface WVCommitRuleEngine : NSObject
{
    BOOL _initing;
    WVRequest *_request;
}

+ (id)getDefaultConfig;
+ (id)useDefaultConfig;
+ (id)getRuleConfigurationFilePath;
+ (id)instance;
@property(retain, nonatomic) WVRequest *request; // @synthesize request=_request;
@property BOOL initing; // @synthesize initing=_initing;
- (void).cxx_destruct;
- (void)initRuleEngineFromData:(id)arg1;
- (void)updateRuleEngine;
- (void)doInitRuleEngine;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)dealloc;
- (void)initRuleEngine;

@end

