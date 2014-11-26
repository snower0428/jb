//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQEExperimentUserGroup, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface IGQEExperiment : NSObject
{
    NSMutableArray *_allUserGroups;
    NSDate *_lastExposureEventDate;
    NSString *_key;
    NSString *_descriptiveName;
    IGQEExperimentUserGroup *_serverSideUserGroup;
    IGQEExperimentUserGroup *_defaultUserGroup;
    NSDictionary *_exposeData;
}

@property(retain, nonatomic) NSDictionary *exposeData; // @synthesize exposeData=_exposeData;
@property(retain, nonatomic) IGQEExperimentUserGroup *defaultUserGroup; // @synthesize defaultUserGroup=_defaultUserGroup;
@property(retain, nonatomic) IGQEExperimentUserGroup *serverSideUserGroup; // @synthesize serverSideUserGroup=_serverSideUserGroup;
@property(copy, nonatomic) NSString *descriptiveName; // @synthesize descriptiveName=_descriptiveName;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)clearUserGroupOverride;
@property(retain, nonatomic) IGQEExperimentUserGroup *overrideUserGroup;
- (id)overrideUserGroupIndexKey;
- (BOOL)validateUserGroupParameters:(id)arg1;
- (id)exposeValueForParameterNamed:(id)arg1;
- (void)addUserGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userGroups;
- (void)sendExposureEvent;
- (id)description;
- (id)initWithKey:(id)arg1;

@end
