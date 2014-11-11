//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSDictionary, NSString, TBShippingAddress;

@interface MTOPBuildOrderResult : TBModel
{
    TBShippingAddress *address;
    NSArray *tradeGroup;
    NSArray *invalidGroup;
    NSArray *payInfo;
    NSDictionary *tradeHidden;
    NSArray *extInfo;
    NSString *checkCode;
    NSString *checkCodeValue;
}

@property(copy, nonatomic) NSString *checkCodeValue; // @synthesize checkCodeValue;
@property(copy, nonatomic) NSString *checkCode; // @synthesize checkCode;
@property(retain, nonatomic) NSArray *extInfo; // @synthesize extInfo;
@property(retain, nonatomic) NSDictionary *tradeHidden; // @synthesize tradeHidden;
@property(retain, nonatomic) NSArray *payInfo; // @synthesize payInfo;
@property(retain, nonatomic) NSArray *invalidGroup; // @synthesize invalidGroup;
@property(retain, nonatomic) NSArray *tradeGroup; // @synthesize tradeGroup;
@property(retain, nonatomic) TBShippingAddress *address; // @synthesize address;
- (void).cxx_destruct;
- (Class)classForKey:(id)arg1;

@end
