//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSNumber;

@interface TBSNSFeedProductItem : TBModel
{
    unsigned long long _id;
    NSNumber *_price;
}

@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

