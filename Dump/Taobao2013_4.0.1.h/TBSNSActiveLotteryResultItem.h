//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBSNSActiveLotteryResultItem : TBModel
{
    NSString *_errorMessageInfo;
    BOOL _success;
    long _hitAmount;
    NSString *_hitMessage;
    NSString *_link;
    NSString *_shareLink;
}

@property(retain, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *hitMessage; // @synthesize hitMessage=_hitMessage;
@property(nonatomic) long hitAmount; // @synthesize hitAmount=_hitAmount;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *errorMessageInfo; // @synthesize errorMessageInfo=_errorMessageInfo;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
