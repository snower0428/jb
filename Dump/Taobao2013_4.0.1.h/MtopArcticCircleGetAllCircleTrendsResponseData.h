//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCModel.h"

@class NSArray;

@interface MtopArcticCircleGetAllCircleTrendsResponseData : ATCModel
{
    int _spBts;
    int _algBts;
    NSArray *_resultList;
}

@property(retain, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
@property(nonatomic) int algBts; // @synthesize algBts=_algBts;
@property(nonatomic) int spBts; // @synthesize spBts=_spBts;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
