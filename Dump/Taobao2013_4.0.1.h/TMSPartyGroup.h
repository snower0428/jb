//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TMSPartyGroup : NSObject
{
    NSString *_partyID;
    NSString *_partyTitle;
    NSMutableArray *_partyGroups;
}

@property(retain, nonatomic) NSMutableArray *partyGroups; // @synthesize partyGroups=_partyGroups;
@property(retain, nonatomic) NSString *partyTitle; // @synthesize partyTitle=_partyTitle;
@property(retain, nonatomic) NSString *partyID; // @synthesize partyID=_partyID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
