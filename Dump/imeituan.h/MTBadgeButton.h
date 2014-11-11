//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MTBadgeView;

@interface MTBadgeButton : UIButton
{
    MTBadgeView *_badgeView;
}

+ (id)buttonWithBadge:(id)arg1;
+ (id)buttonNormalBadge;
@property(retain, nonatomic) MTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)changeBadgePosition;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBadgeNumber:(unsigned int)arg1;
- (void)setBadgeImage:(id)arg1;
- (id)init;

@end
