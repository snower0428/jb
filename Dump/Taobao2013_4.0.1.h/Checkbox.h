//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBase.h"

#import "UIGestureRecognizerDelegate.h"

@class UIButton;

@interface Checkbox : UIBase <UIGestureRecognizerDelegate>
{
    UIButton *check;
}

- (void).cxx_destruct;
- (void)dissmissPopView;
- (void)showErrorMsg:(id)arg1;
- (BOOL)checkInput;
- (void)clickCheckboxButton:(id)arg1;
- (id)getValue;
- (struct CGSize)calcSize;
- (void)layoutSubviews;
- (void)handleSingleTap:(id)arg1;
- (id)init:(struct CGSize)arg1 withModel:(id)arg2;

@end

