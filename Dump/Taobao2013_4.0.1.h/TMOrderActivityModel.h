//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMOrderElementModel.h"

@class NSArray, NSString;

@interface TMOrderActivityModel : TMOrderElementModel
{
    NSString *_actName;
    NSArray *_actDesc;
    long long _discount;
    long long _point;
}

@property(nonatomic) long long point; // @synthesize point=_point;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSArray *actDesc; // @synthesize actDesc=_actDesc;
@property(retain, nonatomic) NSString *actName; // @synthesize actName=_actName;
- (void).cxx_destruct;
- (float)promotionPrice;
- (id)activityDescription;
- (id)initWithDictionary:(id)arg1;

@end

