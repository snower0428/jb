//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MtopServiceUnit : NSObject
{
    NSString *_serId;
    NSString *_uniqId;
    NSString *_price;
    NSString *_free;
    NSString *_multi;
}

@property(retain, nonatomic) NSString *multi; // @synthesize multi=_multi;
@property(retain, nonatomic) NSString *free; // @synthesize free=_free;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *uniqId; // @synthesize uniqId=_uniqId;
@property(retain, nonatomic) NSString *serId; // @synthesize serId=_serId;
- (void).cxx_destruct;
- (BOOL)isServiceFree;

@end

