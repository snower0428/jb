//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCModel.h"

@class NSString;

@interface MtopArcticCircleGetCircleOfStarRequest : ATCModel
{
    NSString *_API_NAME;
    BOOL _NEED_ECODE;
    BOOL _NEED_SESSION;
    NSString *_VERSION;
    NSString *_userId;
    NSString *_userNick;
    NSString *_distX;
    NSString *_distY;
}

@property(retain, nonatomic) NSString *distY; // @synthesize distY=_distY;
@property(retain, nonatomic) NSString *distX; // @synthesize distX=_distX;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *VERSION; // @synthesize VERSION=_VERSION;
@property(nonatomic) BOOL NEED_SESSION; // @synthesize NEED_SESSION=_NEED_SESSION;
@property(nonatomic) BOOL NEED_ECODE; // @synthesize NEED_ECODE=_NEED_ECODE;
@property(retain, nonatomic) NSString *API_NAME; // @synthesize API_NAME=_API_NAME;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

