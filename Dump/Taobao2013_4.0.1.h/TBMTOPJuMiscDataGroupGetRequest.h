//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMTOPRequest.h"

@class NSString;

@interface TBMTOPJuMiscDataGroupGetRequest : TBMTOPRequest
{
    NSString *_groupName;
}

@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void)sendRequest;
- (id)init;
- (void)dealloc;

@end

