//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class MTHomeCategory;

@interface MTMoreCategoryItem : MTTableViewItem
{
    MTHomeCategory *_moreCategory;
    id _moreTarget;
    SEL _moreSelectAction;
}

+ (id)initWithCategory:(id)arg1;
@property(nonatomic) SEL moreSelectAction; // @synthesize moreSelectAction=_moreSelectAction;
@property(nonatomic) __weak id moreTarget; // @synthesize moreTarget=_moreTarget;
@property(retain, nonatomic) MTHomeCategory *moreCategory; // @synthesize moreCategory=_moreCategory;
- (void).cxx_destruct;
- (float)cellHeight;

@end
