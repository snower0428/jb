//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray;

@interface NdCPSessionIdMng : NSObject
{
    NSMutableArray *arrInvocWhenSuccessful;
    NSMutableArray *arrInvocWhenFailed;
    BOOL isLoading;
    NSError *errorForSessionId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSError *errorForSessionId; // @synthesize errorForSessionId;
@property(retain, nonatomic) NSMutableArray *arrInvocWhenFailed; // @synthesize arrInvocWhenFailed;
@property(retain, nonatomic) NSMutableArray *arrInvocWhenSuccessful; // @synthesize arrInvocWhenSuccessful;
- (void)getInitialSessionIdDidFinish:(id)arg1;
- (void)invokeWhenDidGetSessionId:(id)arg1 orInvokeWhenFailed:(id)arg2;
- (BOOL)hasSessionId;
- (void)invokeAllForSessionIdWithError:(id)arg1;
- (void)addSuccessfulInvocForSessionId:(id)arg1 failedInvoc:(id)arg2;
- (void)dealloc;

@end

