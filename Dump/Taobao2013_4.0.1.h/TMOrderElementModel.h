//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMOrderElementModel : NSObject
{
    NSString *uid;
    NSString *parent;
    NSString *type;
    long long sum;
}

@property(nonatomic) long long sum; // @synthesize sum;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *parent; // @synthesize parent;
@property(retain, nonatomic) NSString *uid; // @synthesize uid;
- (void).cxx_destruct;
- (float)promotionPrice;
- (id)initWithDictionary:(id)arg1;

@end

