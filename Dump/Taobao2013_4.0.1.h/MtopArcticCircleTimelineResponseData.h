//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LQModel.h"

@class NSArray, NSString;

@interface MtopArcticCircleTimelineResponseData : LQModel
{
    NSString *_algBts;
    int _returnCount;
    NSString *_spBts;
    NSArray *_feedArray;
    NSString *_unreadFeedsCount;
}

@property(retain, nonatomic) NSString *unreadFeedsCount; // @synthesize unreadFeedsCount=_unreadFeedsCount;
@property(retain, nonatomic) NSArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSString *spBts; // @synthesize spBts=_spBts;
@property(nonatomic) int returnCount; // @synthesize returnCount=_returnCount;
@property(retain, nonatomic) NSString *algBts; // @synthesize algBts=_algBts;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

