//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSNumber, NSString;

@interface TBCartBagMoveToFavRetInfo : TBModel
{
    NSString *_itemId;
    NSString *_msg;
    NSNumber *_success;
    NSString *_cartId;
}

@property(readonly, nonatomic) NSString *cartId; // @synthesize cartId=_cartId;
@property(readonly, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(readonly, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

