//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface TBMessageCenterDetailCartRequestModel : TBSDKRequestModel
{
    NSArray *_itemList;
    int _totalItem;
    NSNumber *_allMessageTypeUnReadMessageCount;
}

@property(retain, nonatomic) NSNumber *allMessageTypeUnReadMessageCount; // @synthesize allMessageTypeUnReadMessageCount=_allMessageTypeUnReadMessageCount;
@property(nonatomic) int totalItem; // @synthesize totalItem=_totalItem;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestMessageCenterDetailCartListByTypeMessageId:(id)arg1 currentPage:(int)arg2 pageSize:(int)arg3 totalItem:(int)arg4;

@end
