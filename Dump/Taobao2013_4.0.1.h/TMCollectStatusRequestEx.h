//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMTOPRequest.h"

@class NSString;

@interface TMCollectStatusRequestEx : TMMTOPRequest
{
    NSString *_itemID;
    int _itemType;
}

@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (BOOL)isCollect;
- (void)sendRequest;
- (id)init;

@end

