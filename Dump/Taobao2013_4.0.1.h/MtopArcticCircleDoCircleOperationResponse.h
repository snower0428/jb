//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCModel.h"

@class MtopArcticCircleDoCircleOperationResponseData, NSArray, NSString;

@interface MtopArcticCircleDoCircleOperationResponse : ATCModel
{
    MtopArcticCircleDoCircleOperationResponseData *_data;
    NSString *_api;
    NSString *_v;
    NSArray *_ret;
}

@property(retain, nonatomic) NSArray *ret; // @synthesize ret=_ret;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
@property(retain, nonatomic) MtopArcticCircleDoCircleOperationResponseData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

