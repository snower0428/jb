//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LQModel.h"

@class NSString;

@interface MtopArcticCircleNewsRequest : LQModel
{
    NSString *_API_NAME;
    BOOL _NEED_ECODE;
    BOOL _NEED_SESSION;
    NSString *_VERSION;
    int _circleId;
    int _isTraver;
    NSString *_perftest;
    int _userId;
}

@property(nonatomic) int userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *perftest; // @synthesize perftest=_perftest;
@property(nonatomic) int isTraver; // @synthesize isTraver=_isTraver;
@property(nonatomic) int circleId; // @synthesize circleId=_circleId;
@property(retain, nonatomic) NSString *VERSION; // @synthesize VERSION=_VERSION;
@property(nonatomic) BOOL NEED_SESSION; // @synthesize NEED_SESSION=_NEED_SESSION;
@property(nonatomic) BOOL NEED_ECODE; // @synthesize NEED_ECODE=_NEED_ECODE;
@property(retain, nonatomic) NSString *API_NAME; // @synthesize API_NAME=_API_NAME;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

