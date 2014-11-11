//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface OrderInfo : NSObject
{
    int _lotteryType;
    int _orderType;
    NSString *_issueName;
    NSString *_issueId;
    NSString *_orderId;
    NSString *_payId;
    NSString *_createTime;
    int _orderStatus;
    NSString *_orderStatusStr;
    NSString *_orderSubStatusStr;
    int _isWin;
    int _isNeedPay;
    NSString *_process;
    NSString *_creatorNick;
    int _isCanPay;
    double _fee;
    double _totalFee;
    int _winStatus;
    double _winMoney;
    NSArray *_bettingList;
    NSArray *_mutiList;
    NSString *_tradeNum;
    BOOL _isPresent;
    int _pursueStatus;
    int _awardStatus;
    int _isOpenAward;
    int _hasLuckyNumber;
    int _uniteBuy;
    int _uniteStatus;
    int _uniteFollowState;
    int _uniteHaveLeaveRight;
    double _uniteProgress;
    NSString *_uniteCreatorNick;
    NSString *_uniteId;
    NSString *_uniteTitle;
    NSString *_uniteStatusStr;
    NSString *_awardStatusStr;
    NSString *_uniteDes;
    NSString *_uniteSerial;
    NSString *_uniteCreateTime;
    int _uniteShare;
    double _uniteFeePerShare;
    double _uniteTotalFee;
    double _uniteProfitPct;
    int _uniteIsWin;
    int _isCalSmallPrizeFinished;
    int _stackNum;
    int _multiNum;
    NSString *_luckyNumber;
    NSArray *_subOrders;
    NSString *_serverTime;
    int _dbType;
    int _playType;
    NSString *_showTitle;
    NSString *_orderIdHelper;
    NSString *_issueIdHelper;
    BOOL isPresent;
    int lotteryType;
    int orderType;
    NSString *issueName;
    NSString *issueId;
    NSString *orderId;
    NSString *payId;
    int orderStatus;
    NSString *orderStatusStr;
    NSString *orderSubStatusStr;
    int isWin;
    int isNeedPay;
    NSString *process;
    NSString *creatorNick;
    int isCanPay;
    int winStatus;
    NSArray *bettingList;
    NSArray *mutiList;
    NSString *tradeNum;
    int pursueStatus;
    int awardStatus;
    int isOpenAward;
    int hasLuckyNumber;
    int uniteBuy;
    int uniteStatus;
    int uniteFollowState;
    int uniteHaveLeaveRight;
    NSString *uniteCreatorNick;
    NSString *uniteId;
    NSString *uniteTitle;
    NSString *uniteStatusStr;
    NSString *awardStatusStr;
    NSString *uniteDes;
    NSString *uniteSerial;
    NSString *createTime;
    NSString *uniteCreateTime;
    int uniteShare;
    int uniteIsWin;
    int isCalSmallPrizeFinished;
    int stackNum;
    int multiNum;
    NSString *luckyNumber;
    double fee;
    double totalFee;
    double winMoney;
    double uniteProgress;
    double uniteFeePerShare;
    double uniteTotalFee;
    double uniteProfitPct;
}

@property(retain, nonatomic) NSString *orderIdHelper; // @synthesize orderIdHelper=_orderIdHelper;
@property(retain, nonatomic) NSString *issueIdHelper; // @synthesize issueIdHelper=_issueIdHelper;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) int dbType; // @synthesize dbType=_dbType;
@property(nonatomic) int playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSArray *subOrders; // @synthesize subOrders=_subOrders;
@property(retain, nonatomic) NSString *luckyNumber; // @synthesize luckyNumber;
@property(nonatomic) int multiNum; // @synthesize multiNum;
@property(nonatomic) int stackNum; // @synthesize stackNum;
@property(nonatomic) int isCalSmallPrizeFinished; // @synthesize isCalSmallPrizeFinished;
@property(nonatomic) int uniteIsWin; // @synthesize uniteIsWin;
@property(nonatomic) double uniteProfitPct; // @synthesize uniteProfitPct;
@property(nonatomic) double uniteTotalFee; // @synthesize uniteTotalFee;
@property(nonatomic) double uniteFeePerShare; // @synthesize uniteFeePerShare;
@property(nonatomic) int uniteShare; // @synthesize uniteShare;
@property(retain, nonatomic) NSString *uniteCreateTime; // @synthesize uniteCreateTime;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *uniteSerial; // @synthesize uniteSerial;
@property(retain, nonatomic) NSString *uniteDes; // @synthesize uniteDes;
@property(retain, nonatomic) NSString *awardStatusStr; // @synthesize awardStatusStr;
@property(retain, nonatomic) NSString *uniteStatusStr; // @synthesize uniteStatusStr;
@property(retain, nonatomic) NSString *uniteTitle; // @synthesize uniteTitle;
@property(retain, nonatomic) NSString *uniteId; // @synthesize uniteId;
@property(retain, nonatomic) NSString *uniteCreatorNick; // @synthesize uniteCreatorNick;
@property(nonatomic) double uniteProgress; // @synthesize uniteProgress;
@property(nonatomic) int uniteHaveLeaveRight; // @synthesize uniteHaveLeaveRight;
@property(nonatomic) int uniteFollowState; // @synthesize uniteFollowState;
@property(nonatomic) int uniteStatus; // @synthesize uniteStatus;
@property(nonatomic) int uniteBuy; // @synthesize uniteBuy;
@property(nonatomic) int hasLuckyNumber; // @synthesize hasLuckyNumber;
@property(nonatomic) int isOpenAward; // @synthesize isOpenAward;
@property(nonatomic) int awardStatus; // @synthesize awardStatus;
@property(nonatomic) int pursueStatus; // @synthesize pursueStatus;
@property(nonatomic) BOOL isPresent; // @synthesize isPresent;
@property(retain, nonatomic) NSString *tradeNum; // @synthesize tradeNum;
@property(retain, nonatomic) NSArray *mutiList; // @synthesize mutiList;
@property(retain, nonatomic) NSArray *bettingList; // @synthesize bettingList;
@property(nonatomic) double winMoney; // @synthesize winMoney;
@property(nonatomic) int winStatus; // @synthesize winStatus;
@property(nonatomic) double totalFee; // @synthesize totalFee;
@property(nonatomic) double fee; // @synthesize fee;
@property(nonatomic) int isCanPay; // @synthesize isCanPay;
@property(retain, nonatomic) NSString *creatorNick; // @synthesize creatorNick;
@property(retain, nonatomic) NSString *process; // @synthesize process;
@property(nonatomic) int isNeedPay; // @synthesize isNeedPay;
@property(nonatomic) int isWin; // @synthesize isWin;
@property(retain, nonatomic) NSString *orderSubStatusStr; // @synthesize orderSubStatusStr;
@property(retain, nonatomic) NSString *orderStatusStr; // @synthesize orderStatusStr;
@property(nonatomic) int orderStatus; // @synthesize orderStatus;
@property(retain, nonatomic) NSString *payId; // @synthesize payId;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId;
@property(retain, nonatomic) NSString *issueId; // @synthesize issueId;
@property(retain, nonatomic) NSString *issueName; // @synthesize issueName;
@property(nonatomic) int orderType; // @synthesize orderType;
@property(nonatomic) int lotteryType; // @synthesize lotteryType;
- (void).cxx_destruct;

@end
