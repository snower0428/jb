//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TBHomePageMarketingItem : TBModel
{
    NSArray *_cardList;
}

@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

