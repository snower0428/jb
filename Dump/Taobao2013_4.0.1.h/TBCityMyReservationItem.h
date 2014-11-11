//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityModel.h"

@class NSString;

@interface TBCityMyReservationItem : TBCityModel
{
    NSString *_reserveTimeWithWeekday;
    NSString *_id;
    NSString *_localstoreId;
    NSString *_localstoreName;
    NSString *_reserveTime;
    NSString *_createTime;
    NSString *_auctionId;
    NSString *_auctionName;
    NSString *_status;
    NSString *_statusInfo;
    NSString *_telephone;
    NSString *_userName;
    NSString *_memo;
    NSString *_money;
    NSString *_alipayOrderId;
    NSString *_address;
    NSString *_userMemo;
    NSString *_userMobile;
    NSString *_memo1;
    NSString *_memo2;
    NSString *_memo3;
    NSString *_info;
    NSString *_voucherId;
    NSString *_isDiancai;
    NSString *_posX;
    NSString *_posY;
}

@property(retain, nonatomic) NSString *posY; // @synthesize posY=_posY;
@property(retain, nonatomic) NSString *posX; // @synthesize posX=_posX;
@property(retain, nonatomic) NSString *isDiancai; // @synthesize isDiancai=_isDiancai;
@property(retain, nonatomic) NSString *reserveTimeWithWeekday; // @synthesize reserveTimeWithWeekday=_reserveTimeWithWeekday;
@property(retain, nonatomic) NSString *voucherId; // @synthesize voucherId=_voucherId;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *memo3; // @synthesize memo3=_memo3;
@property(retain, nonatomic) NSString *memo2; // @synthesize memo2=_memo2;
@property(retain, nonatomic) NSString *memo1; // @synthesize memo1=_memo1;
@property(retain, nonatomic) NSString *userMobile; // @synthesize userMobile=_userMobile;
@property(retain, nonatomic) NSString *userMemo; // @synthesize userMemo=_userMemo;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *alipayOrderId; // @synthesize alipayOrderId=_alipayOrderId;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *auctionName; // @synthesize auctionName=_auctionName;
@property(retain, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *reserveTime; // @synthesize reserveTime=_reserveTime;
@property(retain, nonatomic) NSString *localstoreName; // @synthesize localstoreName=_localstoreName;
@property(retain, nonatomic) NSString *localstoreId; // @synthesize localstoreId=_localstoreId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)getFormatDateString:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

