//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface FocusTouchView : UIView
{
    UIImageView *focus;
    id <FocusTouchViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FocusTouchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishfocus;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

