//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GgkInfo : NSObject
{
    NSString *name;
    NSString *beginTime;
    NSString *endTime;
    NSString *ruleUrl;
    NSString *ruleIntro;
}

@property(retain, nonatomic) NSString *ruleIntro; // @synthesize ruleIntro;
@property(retain, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)unPacketGgkInfo:(id)arg1;
- (id)init;

@end
