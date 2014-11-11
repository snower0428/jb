//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface TBCabinInfo : NSObject
{
    BOOL _isQijian;
    BOOL _isSupport_children;
    BOOL _isSupport_itinerary;
    BOOL _isdisabled;
    BOOL _isTakeInsure;
    BOOL _forceInusre;
    NSNumber *_bestPromotionPrice;
    NSNumber *_fees;
    NSNumber *_taxes;
    NSNumber *_priceDiscount;
    NSNumber *_priceStandard;
    NSNumber *_discount;
    NSString *_rules;
    NSNumber *_supplyUserId;
    NSNumber *_soldCount;
    NSNumber *_leftNumber;
    NSString *_supplyUserName;
    NSString *_supplyUserPhone;
    NSNumber *_cabinId;
    NSNumber *_cabinType;
    NSNumber *_cabinClass;
    NSString *_autoBook;
    NSString *_flagship;
    NSNumber *_spId;
    NSNumber *_opId;
    NSNumber *_specialFlag;
    NSString *_outSpeed;
    int _payType;
    NSString *_payTypeDescription;
    NSString *_specialIntroduction;
    NSString *_specialTitle;
    NSString *_promotionrule;
    NSNumber *_promotionType;
    NSString *_promotionOnSale;
    NSString *_onsaleDetailUrl;
    NSString *_onsaleLabelText;
    NSString *_onsaleDescription;
    NSString *_insureAdultFee;
    NSString *_insureTotalFee;
    NSString *_insure_buy_text;
    NSString *_yiwai_insure_text;
    NSNumber *_bonus;
}

@property(copy, nonatomic) NSNumber *bonus; // @synthesize bonus=_bonus;
@property(copy, nonatomic) NSString *yiwai_insure_text; // @synthesize yiwai_insure_text=_yiwai_insure_text;
@property(copy, nonatomic) NSString *insure_buy_text; // @synthesize insure_buy_text=_insure_buy_text;
@property(nonatomic) BOOL forceInusre; // @synthesize forceInusre=_forceInusre;
@property(nonatomic) BOOL isTakeInsure; // @synthesize isTakeInsure=_isTakeInsure;
@property(copy, nonatomic) NSString *insureTotalFee; // @synthesize insureTotalFee=_insureTotalFee;
@property(copy, nonatomic) NSString *insureAdultFee; // @synthesize insureAdultFee=_insureAdultFee;
@property(copy, nonatomic) NSString *onsaleDescription; // @synthesize onsaleDescription=_onsaleDescription;
@property(copy, nonatomic) NSString *onsaleLabelText; // @synthesize onsaleLabelText=_onsaleLabelText;
@property(copy, nonatomic) NSString *onsaleDetailUrl; // @synthesize onsaleDetailUrl=_onsaleDetailUrl;
@property(copy, nonatomic) NSString *promotionOnSale; // @synthesize promotionOnSale=_promotionOnSale;
@property(copy, nonatomic) NSNumber *promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *promotionrule; // @synthesize promotionrule=_promotionrule;
@property(copy, nonatomic) NSString *specialTitle; // @synthesize specialTitle=_specialTitle;
@property(copy, nonatomic) NSString *specialIntroduction; // @synthesize specialIntroduction=_specialIntroduction;
@property(copy, nonatomic) NSString *payTypeDescription; // @synthesize payTypeDescription=_payTypeDescription;
@property(nonatomic) int payType; // @synthesize payType=_payType;
@property(nonatomic) BOOL isdisabled; // @synthesize isdisabled=_isdisabled;
@property(nonatomic) BOOL isSupport_itinerary; // @synthesize isSupport_itinerary=_isSupport_itinerary;
@property(nonatomic) BOOL isSupport_children; // @synthesize isSupport_children=_isSupport_children;
@property(nonatomic) BOOL isQijian; // @synthesize isQijian=_isQijian;
@property(copy, nonatomic) NSString *outSpeed; // @synthesize outSpeed=_outSpeed;
@property(copy, nonatomic) NSNumber *specialFlag; // @synthesize specialFlag=_specialFlag;
@property(copy, nonatomic) NSNumber *opId; // @synthesize opId=_opId;
@property(copy, nonatomic) NSNumber *spId; // @synthesize spId=_spId;
@property(copy, nonatomic) NSString *flagship; // @synthesize flagship=_flagship;
@property(copy, nonatomic) NSString *autoBook; // @synthesize autoBook=_autoBook;
@property(copy, nonatomic) NSNumber *cabinClass; // @synthesize cabinClass=_cabinClass;
@property(copy, nonatomic) NSNumber *cabinType; // @synthesize cabinType=_cabinType;
@property(copy, nonatomic) NSNumber *cabinId; // @synthesize cabinId=_cabinId;
@property(copy, nonatomic) NSString *supplyUserPhone; // @synthesize supplyUserPhone=_supplyUserPhone;
@property(copy, nonatomic) NSString *supplyUserName; // @synthesize supplyUserName=_supplyUserName;
@property(copy, nonatomic) NSNumber *leftNumber; // @synthesize leftNumber=_leftNumber;
@property(copy, nonatomic) NSNumber *soldCount; // @synthesize soldCount=_soldCount;
@property(copy, nonatomic) NSNumber *supplyUserId; // @synthesize supplyUserId=_supplyUserId;
@property(copy, nonatomic) NSString *rules; // @synthesize rules=_rules;
@property(copy, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSNumber *priceStandard; // @synthesize priceStandard=_priceStandard;
@property(copy, nonatomic) NSNumber *priceDiscount; // @synthesize priceDiscount=_priceDiscount;
@property(copy, nonatomic) NSNumber *taxes; // @synthesize taxes=_taxes;
@property(copy, nonatomic) NSNumber *fees; // @synthesize fees=_fees;
@property(copy, nonatomic) NSNumber *bestPromotionPrice; // @synthesize bestPromotionPrice=_bestPromotionPrice;
- (void).cxx_destruct;

@end

