//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMOrderPromotionModel : NSObject
{
    NSString *pid;
    NSString *title;
    NSString *desc;
    long long discount;
    long long point;
    long long usePoint;
}

@property(nonatomic) long long usePoint; // @synthesize usePoint;
@property(nonatomic) long long point; // @synthesize point;
@property(nonatomic) long long discount; // @synthesize discount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *pid; // @synthesize pid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

