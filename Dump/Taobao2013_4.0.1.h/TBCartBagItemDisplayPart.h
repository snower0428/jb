//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

@interface TBCartBagItemDisplayPart : TBModel
{
    NSString *_title;
    NSString *_pic;
    NSString *_quantity;
    NSString *_skuInfo;
    NSArray *_icons;
}

@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)skuDictionary;

@end

