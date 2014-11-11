//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAwayListItemCell.h"

@class NSArray;

@interface SBAwaySystemAlertCell : SBAwayListItemCell
{
    NSArray *_buttons;
    id <SBAwayListCellButtonHandler> _buttonHandler;
    BOOL _horizontalButtonLayout;
}

+ (float)_buttonVerticalInset;
+ (float)_buttonHorizontalInset;
+ (id)_buttonFont;
+ (float)_buttonWidthForText:(id)arg1;
+ (id)_buttonPressedImage;
+ (id)_buttonBackgroundImage;
+ (id)_alarmButtonPressedImage;
+ (id)_alarmButtonBackgroundImage;
+ (float)rowHeightForTitle:(id)arg1 message:(id)arg2 rowWidth:(float)arg3 buttonLabels:(id)arg4;
- (void)layoutSubviews;
- (float)_getMaxButtonWidth;
- (struct CGRect)_cellContentViewFrame;
- (void)setButtonLabels:(id)arg1 handler:(id)arg2 isAlarm:(BOOL)arg3;
- (void)_createContentView;
- (void)_forwardButtonPressToHandler:(id)arg1;
- (void)dealloc;

@end

