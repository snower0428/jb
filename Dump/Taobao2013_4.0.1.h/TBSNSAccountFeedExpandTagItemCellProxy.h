//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSAccountFeedExpandItemCellProxy.h"

@class UIImage;

@interface TBSNSAccountFeedExpandTagItemCellProxy : TBSNSAccountFeedExpandItemCellProxy
{
    UIImage *_iconAccountAreaArrow;
    int _markFollowButton;
}

+ (id)cellProxy;
@property(nonatomic) int markFollowButton; // @synthesize markFollowButton=_markFollowButton;
@property(retain, nonatomic) UIImage *iconAccountAreaArrow; // @synthesize iconAccountAreaArrow=_iconAccountAreaArrow;
- (void).cxx_destruct;
- (BOOL)hasFollowButton:(id)arg1;
- (CDUnknownBlockType)getCellRefreshProxy;
- (CDUnknownBlockType)getCellDrawProxy;
- (id)init;

@end
