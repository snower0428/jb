//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBUserInfoAlipayItem : TBModel
{
    NSString *_alipayAccount;
    NSString *_amount;
    BOOL _bindMobile;
    BOOL _katong;
    NSString *_seesionId;
}

@property(retain, nonatomic) NSString *seesionId; // @synthesize seesionId=_seesionId;
@property(nonatomic) BOOL katong; // @synthesize katong=_katong;
@property(nonatomic) BOOL bindMobile; // @synthesize bindMobile=_bindMobile;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

