//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSString;

@interface MTHomeHotDealMoreTableViewItem : MTTableViewItem
{
    NSString *_title;
    id _moreTarget;
    SEL _moreAction;
}

@property(nonatomic) SEL moreAction; // @synthesize moreAction=_moreAction;
@property(nonatomic) id moreTarget; // @synthesize moreTarget=_moreTarget;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (float)cellHeight;

@end
