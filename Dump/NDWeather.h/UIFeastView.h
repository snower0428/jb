//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ThemeManager, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIFeastView : UIView
{
    UILabel *_lbl4Verical1;
    UILabel *_lbl4Verical2;
    UILabel *_lbl4Verical31;
    UILabel *_lbl4Verical32;
    UILabel *_lbl4NonResult;
    UIImageView *_img4line;
    ThemeManager *themeManager;
}

@property(readonly, nonatomic) ThemeManager *themeManager; // @synthesize themeManager;
@property(retain, nonatomic) UIImageView *img4line; // @synthesize img4line=_img4line;
- (void)dealloc;
- (void)_showFeastInfo:(BOOL)arg1;
- (void)_refreshView:(id)arg1 withMode:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
