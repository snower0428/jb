//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface AppTabItemSelectView : UIView
{
    UIImageView *selectedView;
    id <AppTabItemSelectViewDataSource><AppTabItemSelectViewDelegate> _delegate;
}

@property(nonatomic) id <AppTabItemSelectViewDataSource><AppTabItemSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initCommon;
- (void)setNeedsDisplay;
- (id)addSelectButton:(id)arg1:(int)arg2:(float)arg3;
- (void)reloadAppSelecView;
- (void)setSelectViewType:(int)arg1;
- (void)buttonClick:(id)arg1;
- (void)animattionToButton:(id)arg1;

@end
