//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SubOrderRateData : NSObject
{
    BOOL _hasEdited;
    NSString *_imgUrl;
    int _numOfStar;
    NSString *_remark;
    NSNumber *_bizOrderId;
    NSNumber *_auctionId;
}

@property(nonatomic) BOOL hasEdited; // @synthesize hasEdited=_hasEdited;
@property(retain, nonatomic) NSNumber *auctionId; // @synthesize auctionId=_auctionId;
@property(retain, nonatomic) NSNumber *bizOrderId; // @synthesize bizOrderId=_bizOrderId;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) int numOfStar; // @synthesize numOfStar=_numOfStar;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;

@end
