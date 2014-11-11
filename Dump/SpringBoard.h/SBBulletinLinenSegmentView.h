//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBulletinImageView.h"

@class UIView;

@interface SBBulletinLinenSegmentView : SBBulletinImageView
{
    UIView *_linenView;
    struct CGSize _linenSize;
    BOOL _showsLinen;
    SBBulletinImageView *_gradientView;
}

@property(nonatomic) BOOL showsLinen; // @synthesize showsLinen=_showsLinen;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGradientAlpha:(float)arg1;
- (void)adjustContents;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 linenView:(id)arg2;

@end

