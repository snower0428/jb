//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CPPickspalMatchReq : NSObject
{
    NSString *_playType;
    int _lotteryType;
    NSString *_hostUrl;
    int _requestType;
    int _playMethod;
}

@property(nonatomic) int playMethod; // @synthesize playMethod=_playMethod;
@property(retain, nonatomic) NSString *hostUrl; // @synthesize hostUrl=_hostUrl;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) NSString *playType; // @synthesize playType=_playType;
- (void).cxx_destruct;
@property(readonly, nonatomic) int requestType; // @synthesize requestType=_requestType;

@end
