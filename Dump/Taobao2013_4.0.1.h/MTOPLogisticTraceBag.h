//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MTOPLogisticTraceBag : NSObject
{
    NSString *_mailNo;
    NSString *_partnerName;
    NSString *_logisticType;
    NSArray *_transitList;
    NSArray *_packageItemList;
}

@property(retain, nonatomic) NSArray *packageItemList; // @synthesize packageItemList=_packageItemList;
@property(retain, nonatomic) NSArray *transitList; // @synthesize transitList=_transitList;
@property(retain, nonatomic) NSString *logisticType; // @synthesize logisticType=_logisticType;
@property(retain, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;
@property(retain, nonatomic) NSString *mailNo; // @synthesize mailNo=_mailNo;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

