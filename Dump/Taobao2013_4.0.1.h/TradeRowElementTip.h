//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TradeRowElementTip : NSObject
{
    BOOL canSelected;
    BOOL drawSep;
    NSString *title;
    NSArray *details;
}

@property(nonatomic) BOOL drawSep; // @synthesize drawSep;
@property(nonatomic) BOOL canSelected; // @synthesize canSelected;
@property(retain, nonatomic) NSArray *details; // @synthesize details;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)init;

@end

