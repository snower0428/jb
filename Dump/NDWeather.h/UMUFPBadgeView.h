//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface UMUFPBadgeView : UIView
{
    UILabel *badgeNumberLabel;
    UIImageView *_badgeBackgroundView;
    BOOL _shouldShowBadgeNumberLabel;
}

@property(nonatomic) BOOL shouldShowBadgeNumberLabel; // @synthesize shouldShowBadgeNumberLabel=_shouldShowBadgeNumberLabel;
@property(retain, nonatomic) UIImageView *badgeBackgroundView; // @synthesize badgeBackgroundView=_badgeBackgroundView;
- (void)updateNewMessageCount:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

