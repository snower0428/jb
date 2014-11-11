//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AppDataCenter : NSObject
{
    BOOL _isRequestFinished;
    double _timeOfRequestFinished;
    NSString *_appKey;
    NSDictionary *_appData;
    NSMutableArray *_handles;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)center;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceArray:(id)arg1 occurrencesOfString:(id)arg2 withString:(id)arg3;
- (void)replaceDictionary:(id)arg1 occurrencesOfString:(id)arg2 withString:(id)arg3;
- (void)requestMagicPenUnlockInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)requestShareTopicInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)requestVersionInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)requestMessagesWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)needRequestData;
- (void)requestAppDataFinished;
- (void)requestAppData;
- (void)setApp:(int)arg1;
- (id)init;
- (void)dealloc;

@end

