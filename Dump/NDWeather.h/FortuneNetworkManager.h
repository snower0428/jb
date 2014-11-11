//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FortuneNetwork, NSString;

__attribute__((visibility("hidden")))
@interface FortuneNetworkManager : NSObject
{
    id <FortuneNetworkManagerDelegate> fortuneDelegate;
    NSString *requestUserGuid;
    int requestType;
    FortuneNetwork *fortuneNetwork;
    int currentRequestSteps;
    int dateType;
}

+ (id)CreateFortuneRequest:(id)arg1 withType:(int)arg2;
@property(nonatomic) int dateType; // @synthesize dateType;
@property(nonatomic) int requestType; // @synthesize requestType;
@property(retain, nonatomic) FortuneNetwork *fortuneNetwork; // @synthesize fortuneNetwork;
@property(copy, nonatomic) NSString *requestUserGuid; // @synthesize requestUserGuid;
@property(nonatomic) id <FortuneNetworkManagerDelegate> fortuneDelegate; // @synthesize fortuneDelegate;
- (void)bussFortuneRequestCallback:(id)arg1;
- (void)requestFortuneWithType:(int)arg1;
- (void)dealloc;
- (void)startNextDayFortuneRequest;
- (void)startTodayFortuneRequest;

@end

