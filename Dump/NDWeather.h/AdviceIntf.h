//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AdviceIntf : NSObject
{
    NSMutableArray *feedbackArray;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *feedbackArray; // @synthesize feedbackArray;
- (void)dealloc;
- (void)checkFeedBack;
- (void)updateFeedBackStatus:(id)arg1;
- (void)readFeedBackFromDB;
- (BOOL)suggestAnswer:(id)arg1:(id)arg2:(id)arg3;
- (void)saveJSONData;
- (int)readPostData:(id)arg1:(id)arg2:(id)arg3:(id *)arg4;
- (BOOL)readPostData:(id)arg1:(id)arg2:(id *)arg3;
- (void)postReceiveReaded;
- (void)postReceiveNewReply;
- (id)getMachineType;
- (void)setHasNewReply:(BOOL)arg1;
- (BOOL)getHasNewReply;

@end

