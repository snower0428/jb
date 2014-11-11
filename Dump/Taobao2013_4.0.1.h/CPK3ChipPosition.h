//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CPK3ChipPosition : NSObject
{
    NSString *_name;
    NSString *_orderCode;
    NSString *_prompt;
    int _award;
    int _price;
    BOOL _isBuyed;
    BOOL _isSelected;
    BOOL _isWined;
    NSString *_buyedToIssue;
    NSDictionary *_itemInfoDic;
    NSArray *_diceNums;
}

@property(retain, nonatomic) NSArray *diceNums; // @synthesize diceNums=_diceNums;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *buyedToIssue; // @synthesize buyedToIssue=_buyedToIssue;
@property(nonatomic) BOOL isWined; // @synthesize isWined=_isWined;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isBuyed; // @synthesize isBuyed=_isBuyed;
@property(nonatomic) int price; // @synthesize price=_price;
@property(nonatomic) int award; // @synthesize award=_award;
@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setWithChipPositionInfoDictionary:(id)arg1;
- (id)initWithChipPositionInfoDictionary:(id)arg1;

@end
