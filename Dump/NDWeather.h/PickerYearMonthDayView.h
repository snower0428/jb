//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PickerYearMonthDayView : UIView
{
    id <PickerContentViewDelegate> delegate;
    BOOL isSolar;
    UIImageView *switchImageView;
    UILabel *lbSolarInfo;
    NSString *solarInfo;
}

@property(retain, nonatomic) NSString *solarInfo; // @synthesize solarInfo;
@property(retain, nonatomic) UILabel *lbSolarInfo; // @synthesize lbSolarInfo;
@property(retain, nonatomic) UIImageView *switchImageView; // @synthesize switchImageView;
@property(nonatomic) id <PickerContentViewDelegate> delegate; // @synthesize delegate;
- (void)buttonClick:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)nextResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initButtons;
- (void)addSwitchButton;
- (void)addButton:(struct CGRect)arg1 WithTitle:(id)arg2 WithPickerButtonType:(int)arg3;
- (void)addLable;
- (void)setSwitchImage;
- (void)changeSwitchImage;
- (void)setSolarInfoText:(id)arg1;
- (void)setIsSolar:(BOOL)arg1;

@end

