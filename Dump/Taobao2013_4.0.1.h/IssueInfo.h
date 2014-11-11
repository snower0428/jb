//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IssueInfo : NSObject
{
    int _lotteryType;
    NSString *_issueName;
    NSString *_issueID;
    int _status;
    NSString *_serverTime;
    NSString *_totalAward;
    NSString *_lastBuyTime;
    NSString *_openAwardTime;
    NSString *_startTime;
    NSString *_lotteryDes;
    double _mistiming;
    NSArray *_pursueIssueList;
    BOOL _isSupportCooperate;
    BOOL _isMasterApp_present;
}

@property(nonatomic) BOOL isMasterApp_present; // @synthesize isMasterApp_present=_isMasterApp_present;
@property(nonatomic) BOOL isSupportCooperate; // @synthesize isSupportCooperate=_isSupportCooperate;
@property(nonatomic) double mistiming; // @synthesize mistiming=_mistiming;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *openAwardTime; // @synthesize openAwardTime=_openAwardTime;
@property(retain, nonatomic) NSString *lastBuyTime; // @synthesize lastBuyTime=_lastBuyTime;
@property(retain, nonatomic) NSString *lotteryDes; // @synthesize lotteryDes=_lotteryDes;
@property(retain, nonatomic) NSArray *pursueIssueList; // @synthesize pursueIssueList=_pursueIssueList;
@property(retain, nonatomic) NSString *totalAward; // @synthesize totalAward=_totalAward;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(retain, nonatomic) NSString *issueName; // @synthesize issueName=_issueName;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
- (void).cxx_destruct;
- (id)GetIssueInfo:(int)arg1 issueTag:(int)arg2;
- (BOOL)isValid;
- (void)setStatusByString:(id)arg1;

@end

