//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCModel.h"

@class NSString;

@interface MtopArcticCircleLikeOperateResponseData : ATCModel
{
    NSString *_msgCode;
}

@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
